import numpy as np

for i in range(1,4):
    filename = 'hidden/hidden_%d.txt'%i
    n = np.random.randint(20,80)
    mat = np.random.randint(-50,100,n*n).reshape((n,n))
    fileptr = open(filename,'w')
    fileptr.write("%d\n"%n)
    for x in mat:
        for y in x:
            fileptr.write("%d "%y)
        fileptr.write("\n")
    fileptr.close()