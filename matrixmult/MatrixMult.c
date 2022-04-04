#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main(int argc, char** argv)
{
    int n = atoi(argv[1]);
    int A[n][n];
    int B[n][n];
    int C[n][n];
    srand(time(NULL));
    for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
            {
                A[i][j] = i + j;
                B[i][j] = i + j;
            }
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            C[i][j] = 0;
    clock_t start, end;
    start = clock();
    for(int i=0; i<n; i++)
        for(int k=0; k<n; k++)
            for(int j=0; j<n; j++)
                C[i][j] += A[i][k]*B[k][j];
    end = clock();
    printf("%d\n", (int)((end - start) * 1000 * 1000 / CLOCKS_PER_SEC));
    return C[n][n];
}

