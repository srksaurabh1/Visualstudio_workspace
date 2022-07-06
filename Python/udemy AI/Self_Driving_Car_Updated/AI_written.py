# importing Libraries

import numpy as np
import random
import os  #load the modwl -save or load the model
import torch
import torch.nn as nn# neural networks
import torch.nn.functional as F 
#diff func that we use in uberlus - convergence
import torch.optim as optim #optimizer
import torch.autograd as autograd #tensor to variable
from torch.autograd import variable

# Creating the architecture of NN

class network(nn.Module): #object oriented in python
# The __init__ method is the Python equivalent of the C++ constructor in an object-oriented approach. 
# The __init__ function is called every time an object is created from a class. The __init__ method 
# lets the class initialize the object's attributes and serves no other purpose. It is only used within classes.

    def __init__(self,input_size, nb_action ) : #init - python syntax = 2 underscore # nb_action - o/p - left, right, straight
        # input_size = argument of __init__ func
        super(network, self).__init__() #pytorch - inherit from nn module - pytorch
        self.input_size = input_size
        self.nb_action = nb_action
        self.fc1 = nn.Linear(input_size, 30)
        self.fc2 = nn.Linear(30, nb_action)
    
    def forward(self, state):
        x = F.relu(self.fc1(state)) # hidden neuron
        q_values = self.fc2(x)
        return q_values

# Creating Experience Replay
class replayMemory(object):
    
    def __init__(self, capacity):
        self.capacity = capacity
        self.memory = []
        # self.capacity - name of the variable that is attached to the object
        # capacity - arugument we will input when creating an object of replaymemomery class
    
    def push(self, event):
        # event - tuple of [st, st +1 , at, at +1]
        self.memory.append(event)
        if len(self.memory) > self.capacity:
            del self.memory[0]
    
    def sample(self, batch_size):
        # if list = ((1,2,3),(4,5,6))
        # zip(*list) = ((1,4),(2,3),(5,6)) - reshape list
        samples = zip(*random.sample(self.memory, batch_size))
        return map(lambda x: variable.Variable(torch.cat(x,0)), samples)
        
# Implementing Deep Q Learning

class Dqn():
    
    def __init__(self, input_size, nb_action,gamma):
        self.gamma = gamma
        self.reward_window = []
        self.model = network(input_size, nb_action)
        self.memory = replayMemory(100000)
        self.optimizer = optim.Adam(self.model.parameters(), lr = 0.001) # capital A
        self.last_state = torch.Tensor(input_size).unsqueeze(0)
        self.last_action = 0
        self.last_reward = 0
    
    def select_action(self, state):
        probs = F.softmax(self.model(variable(state, volatile = True))*7) # T =7
        action = probs.multinomial()
        return action.data[0,0]
    
    def learn(self, batch_state, batch_next_state,batch_reward, batch_action):
        outputs = self.model(batch_state).gather(1, batch_action.unsqueeze(1)).squeeze(1)
        next_output = self.model(batch_next_state).detach().max(1)[0]
        # action index 1 - max
        target = self.gamma * next_output + batch_reward
        td_loss = F.smooth_l1_loss(outputs, target)
        # td = temporal diff - HUbber loss
        # stocaistis gradient method to back propagate
        self.optimizer.zero_grad()
        #zero_grade() - reinitilaze at each iteration of loop
        td_loss.backward(retain_variables = True)
        self.optimizer.step() # update wts
    
    def update(self,reward, new_signal):
        new_state = torch.Tensor(new_signal).float().unsqueeze(0)
        self.memory.push((self.last_state, new_state, torch.LongTensor([int(self.last_action)]), torch.Tensor([self.last_reward])))
        action = self.select_action(new_state)
        if len(self.memory.memory) >100 : 
            batch_state, batch_next_state, batch_reward, batch_action = self.memory.sample(100)
            self.learn(batch_state, batch_next_state, batch_reward, batch_action)
        self.last_action = action
        self.last_state = new_state
        self.last_reward = reward
        self.reward_window.append(reward)
        if len(self.reward_window) > 1000:
            del self.reward_window[0]
        return action
    
    def score(self):
        return sum(self.reward_window)/(len(self.reward_window) + 1.) #denominator should not be zero

    def save(self):
        torch.save({'state_dict' : self.model.state_dict() , 
                    'optimizer' : self.optimizer.state_dict}
                    , 'last_brain.pth')  # dictionary - key

    def load(self):
        if os.path.isfile('last_brain.pth'):
            print("=> Loading Checkpoint...")
            checkpoint = torch.load('last_brain.pth')
            self.model.load_state_dict(checkpoint['state_dict'])
            self.optimizer.load_state_dict(checkpoint['optimizer'])
            print("Done: ")
        else:
            print("No checkpoint found")