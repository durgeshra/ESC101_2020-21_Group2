# file =open("hidden.txt","w+")

number=40
budget=100
import random
print(number, budget)
li = []
for i in range(budget+1, 2*budget):
    li.append(i+1)

random.shuffle(li)
for i in range(number):
    print(li[i], end=" ")
