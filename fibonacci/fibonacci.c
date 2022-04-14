#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char** argv)
{
    int n = atoi(argv[1]);
    clock_t start, end;

    start = clock();

    /* Get n-th Fibonacci number */
    unsigned long long int a = 0, b = 1, tmp;
    for (int i = 0; i < n; i++) {
        tmp = a;
        a = b;
        b = tmp + a;
    }

    end = clock();

    volatile unsigned long long int x = b; /* Prevent compiler from optimizing out the loop */

    /* Print execution time in microseconds */
    printf("%d\n", (int)((end - start) * 1000 * 1000 / CLOCKS_PER_SEC));

    return 0;
}
