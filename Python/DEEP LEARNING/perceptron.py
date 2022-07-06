import matplotlib.pyplot as plt
import numpy as np

# NOT
X_NOT = np.ones((2,2), dtype = 'float')
X_NOT[0,1] = 0
y_NOT = [1,0]

# AND , OR
X = np.ones((4, 3), dtype='float')
X[1, 2] = 0
X[2, 1] = 0
X[3, 1] = 0
X[3, 2] = 0
y_AND = [1, 0, 0, 0]
y_OR = [1, 1, 1, 0]

# Prediction & Training
def predict(weights, inputs):
    return (np.dot(inputs, weights) > 0).flatten()
    # flatten() - flatten the array into 1D
def train(weights, X, y, epoch = 100):
    for _ in range(epoch):
        for i in range(len(y)):
            inputs = X[i,:]
            label = y[i]

            prediction = predict(weights, inputs)
            weights += (label - prediction) * inputs

# Perceptron 
weights_NOT = np.zeros(2)
print(f"Before: {weights_NOT}")
train(weights_NOT, X_NOT, y_NOT)
print(f"After: {weights_NOT}")

# Verification
print(np.dot(X_NOT, weights_NOT) == y_NOT)

# For AND, OR
weights_AND = np.zeros(3)
weights_OR = np.zeros(3)
train(weights_AND, X, y_AND)
train(weights_OR,X, y_OR)
print(f"AND: {weights_AND}")
print(f"OR: {weights_OR}")