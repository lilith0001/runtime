#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char** argv)
{
    int n = atoi(argv[1]);
    int A[n];
    int B[n];
    for(int i=0; i<n; i++)
        A[i] = i;
    int k = 0;
    for(int i = n - 1; i>=0; i--)
    {
        B[k] = A[i];
        k++;
    }
    int min, minIndex;
    srand(time(NULL));

    clock_t start, end;
    start = clock();
    for(int i=0; i<n; i++)
    {
        min = B[i];
        minIndex = i;
        for(int j=i+1; j<n; j++)
            if(B[j] < min)
            {
                min = B[j];
                minIndex = j;
            }
        int temp = A[i];
        B[i] = min;
        B[minIndex] = temp;	
    }
    end = clock();
	printf("%d\n", (int)((end - start) * 1000 * 1000 / CLOCKS_PER_SEC));
    return B[n];
}