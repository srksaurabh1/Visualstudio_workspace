import numpy as np
import torch

x = torch.tensor([[73., 67, 43],[91,81,64],[87,134,58],[102,43,37],[69,96,70]])

w = torch.randn(2,3, requires_grad = True)
b = torch.randn(2, requires_grad = True)

def model(x):
    return x @ w.t() + b

pred = model(x)
y = torch.tensor([[56.,70],[81,101],[119,133],[22,37],[103,119]])

diff = pred - y
diff_sqr = diff ** 2
torch_sum = torch.sum(diff_sqr)/(diff_sqr.numel())
torch_sqrt = torch.sqrt(torch_sum)

