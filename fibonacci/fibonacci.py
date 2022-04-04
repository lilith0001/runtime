import time
import sys

# Bypass Python's internal limit on number of recursive function calls.
#from functools import lru_cache

#@lru_cache(maxsize=None)
def fibr(n):
    if n < 3:
        return 1
    else:
        return fibr(n-1) + fibr(n-2)

n = int(sys.argv[1])
sum = int()

start = time.time_ns()
sum = fibr(n)
end = time.time_ns()

print(f"{int(int((end-start)/1000))}",end='') # µs