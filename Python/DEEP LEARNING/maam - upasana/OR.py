import numpy as np
from math import *
import random
import matplotlib as plt
def hardlim(w1,w2,x1,x2,b):
 a= w1*x1 + w2*x2 + b
 if a>0 :
   return 1
 else :
   return 0

x = np.array([[0,0],[0,1],[1,0],[1,1]])
''''w1= np.random.uniform(-0.5,0.5)
w2=np.random.uniform(-0.5,0.5)
b=np.random.rand()
'''
w1=0.5
w2=1
b=-0.5

y1= np.array([0,1,1,1])
y=[0,0,0,0]
for j in range (2):
    for i in range (len(x)):
        y[i] = hardlim(w1,w2,x[i][0],x[i][1],b)
        error= y1[i]-y[i]
        w1=w1+0.1*error*x[i][0]
        w2=w2+0.1*error*x[i][1]
print ('w1=', w1)
print ('w2=', w1)
print ('Y=', y)
        
        




