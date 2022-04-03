import numpy as np
import time
import sys

n = int(sys.argv[1])
A = np.reshape(np.array([0] * n**2, dtype = int), (n, n))
B = np.reshape(np.array([0] * n**2, dtype = int), (n, n))
C = np.reshape(np.array([0] * n**2, dtype = int), (n, n))
for i in range(n):
    for j in range(n):
        A[i][j] = i + j
        B[i][j] = i + j

start = time.time_ns()
for i in range(n):
    for j in range(n):
        C[i][j] = sum(A[i,:] * B[:,j])       
end = time.time_ns()

print(f'{int(int(end-start)/1000)}',end='') # µs