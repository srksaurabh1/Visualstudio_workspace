import numpy as np
import matplotlib.pyplot as plt
import random
#%matplotlib inline 

def sigma(x,w,b):
    return 1 / (1 + np.exp(-((w*x)+b)))

for b in range(5):
    X = np.linspace(-1, 1, 100)
    plt.plot(X, sigma(X,25,b))
    plt.text(-1,1,'b='+str(b))
    plt.show()
'''
for w in range(10):
    X = np.linspace(-1, 1, 100)
    plt.plot(X, sigma(X,w,0))
    plt.text(-0.5,0.5,'w='+str(w))
    plt.show()
'''
