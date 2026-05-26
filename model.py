#!/bin/python3
import torch
import torch.nn as nn
import torch.optim as optim

class Model(nn.Module):
    def __init__(self, in_features=1, l1=8, out_features=1):
        super().__init__()
        self.activ_func = nn.ReLU()
        self.layer1 = nn.Linear(in_features, l1)
        self.out = nn.Linear(l1, out_features)

    def forward(self, x):
        x = self.activ_func(self.layer1(x))
        x = self.out(x)
        return x


dev = torch.device("cpu")

learning_rate = 0.01
optimizer = optim.Adam(params=model.parameters(), lr=learning_rate)
loss_func = nn.MSELoss()
epochs = 150

X = torch.rand(3,3).to(device=dev)
correct = torch.tensor(5).to(device=dev)
print(X)
print(correct)

model = Model(in_features=1, out_features=1).to(device=dev)
for epoch in range(epochs):
    optimizer.zero_grad()
    Y = model.forward(X)
    loss = loss_func(Y, correct)
    if epoch % 10 == 0:
        print(f"prediction: {Y}, loss: {loss.item()}")
    loss.backward()
    optimizer.step()