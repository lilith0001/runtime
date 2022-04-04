import time
import sys

n = int(sys.argv[1])
A = [0]*n
B = [0]*n
min = None
min_index = None

# populating array in reverse sorted order
for i in range(n):
	A[i] = i
k = 0
for i in reversed(A):
    B[k] = A[i]
    k += 1

start = time.time_ns()
for i in range(n):
    min = B[i]
    min_index = i
    for j in range(i+1, n):
        if B[j] < min:
            min = B[j]
            min_index = j
    temp = B[i]
    B[i] = min
    B[min_index] = temp;	
end = time.time_ns()

print(f'{int((end - start)/1000)}') # µs