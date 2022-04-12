#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int fib(int n)
{
    if (n < 3)
        return 1;
    else
        return fib(n-1) + fib(n-2);
}

int main(int argc, char** argv)
{
    srand(time(NULL));
    int n = atoi(argv[1]);
    int sum;
    clock_t start, end;
    
    start = clock();
    sum = fib(n);
    end = clock();
    printf("%d\n", (int)((end - start) * 1000 * 1000 / CLOCKS_PER_SEC));
    return sum;
}
