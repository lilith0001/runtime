#include <stdlib.h>
#include <stdio.h>
#include <sys/time.h>
int main(int argc, char** argv)
{
	srand(time(NULL));
	int n = atoi(argv[1]);
	long long int lst[n];
	for(long long int i = 0; i < n; i++)
		lst[i] = i;
	long long int sum = 0;
    clock_t start, end;
	start = clock();
	for(int i = 0; i < n; i++)
		sum += lst[i];
	end = clock();
	printf("%d", (int)((end - start) * 1000 * 1000 / CLOCKS_PER_SEC));
	return 0;
}