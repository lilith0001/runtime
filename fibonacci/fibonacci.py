import time
import sys

n = int(sys.argv[1])

start = time.time_ns()

a = 0
b = 1

# Get n-th Fibonacci number
for i in range(n - 1):
    a, b = b, a + b

end = time.time_ns()

# Print execution time in microseconds
print((end - start)//1000)
