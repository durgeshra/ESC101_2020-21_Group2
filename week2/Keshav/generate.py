import numpy as np
f = open('hidden3.txt','w')
def sum_dig(n):
    s = 0
    while(n>0):
        s+=n%10
        n=n//10
    return s
total = 0
for i in range(30):

    x = np.random.randint(-10,30)
    while x is -1:
        x = np.random.randint(-1000,1000)
    if x < 0:
        x = -x
    if sum_dig(x) >= 7:
        total+=1
    f.write("%d "%x)
f.write("-1")
print(total)