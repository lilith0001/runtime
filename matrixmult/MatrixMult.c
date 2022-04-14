#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char** argv)
{
    int n = atoi(argv[1]);

    /* Allocate matrices A, B and C */
    int *A = malloc(n * n * sizeof(int));
    int *B = malloc(n * n * sizeof(int));
    int *C = malloc(n * n * sizeof(int));

    /* Fill matrices A and B */
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            A[i * n + j] = i + j;
            B[i * n + j] = i + j;
        }
    }

    clock_t start, end;

    start = clock();

    /* Transpose B */
    int *tB = malloc(n * n * sizeof(int));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            tB[i * n + j] = B[j * n + i];

    /* Multiply A and tB (transposed B) */
    int sum = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            sum = 0;
            for(int k=0; k<n; k++) {
                sum += A[i * n + k] * tB[j * n + k];
            }
            C[i * n + j] = sum;
        }
    }

    end = clock();

    /* Free matrices */
    free(A);
    free(B);
    free(tB);
    free(C);

    /* Print execution time in microseconds */
    printf("%d\n", (int)((end - start) * 1000 * 1000 / CLOCKS_PER_SEC));

    return 0;
}
