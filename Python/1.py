import math
def derivative(f, x, dx = 1e-6):
    fpx = ((fx + dx) - (fx - dx))/(2*dx)

def netwon(f, x0, tol = 1e-10, itmax = 100):
	x = x0
	fx = f(x)
	if abs(fx) < tol :
		return x
	
	for _ in range(itmax):
		fpx = derivative (f, x , dx)
		x = x - fx/fpx
		fx = f(x)
		if abs(fx) < tol :
			break
	return x