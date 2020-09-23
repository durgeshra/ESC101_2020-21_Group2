import numpy as np

for i in range(2,4):
    filename = 'hidden/hidden_%d.txt'%i
    n = np.random.randint(50,100)
    arr = np.random.randint(-50,100,n)
    # mat = np.random.randint(-50,100,n*n).reshape((n,n))
    fileptr = open(filename,'w')
    fileptr.write("%d\n"%n)
    for x in arr:
        fileptr.write("%d "%x)
    fileptr.write("\n")

    arr = arr[::-1]
    fileptr = open('hidden/output_%d.txt'%i,'w')
    # fileptr.write("%d\n"%n)
    for x in arr:
        fileptr.write("%d "%x)
    fileptr.write("\n")
    
    fileptr.close()