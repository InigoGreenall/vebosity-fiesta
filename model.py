#!/bin/python3
import torch
import torch.nn as nn
import torch.optim as optim

class Model(nn.Module):
    def __init__(self, in_features=6, h1=16, h2=16, out_features=2):
        super().__init__()
        self.activ_func = nn.Sigmoid()
        self.to_hidden1 = nn.Linear(in_features, h1)
        self.to_hidden2 = nn.Linear(h1, h2)
        self.to_out = nn.Linear(h2, out_features)
    
    def forward(self, x):
        x = self.activ_func(self.to_hidden1(x))
        x = self.activ_func(self.to_hidden2(x))
        x = self.activ_func(self.to_out(x))
        return x

torch.set_default_device(torch.device("cuda"))

model = Model()
print(model)
for name, param in model.named_parameters():
    print(f"{name}: {param}")
    if name == "to_out.bias":
        with torch.no_grad():
            param[1] = 0.6969

for name, param in model.named_parameters():
    print(f"{name}: {param}")
