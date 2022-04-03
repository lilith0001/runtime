import time
import sys

input = int(sys.argv[1])
lst = list(range(input))
sum = 0
start = time.time_ns()
for i in range(input):
	sum += lst[i]
end = time.time_ns()

print(f"{int(int((end-start)/1000))}",end='') # µs