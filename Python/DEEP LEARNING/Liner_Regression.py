import numpy as np
import matplotlib.pyplot as plt

data = np.array(np.loadtxt("D:\Programs\Visualstudio workspace\DEEP LEARNING\data\Anscombe1.dat"))
print(data)

X = data[:,0].reshape(-1,1)
print(X)
Y = data[:,1].reshape(-1,1)
print(Y)