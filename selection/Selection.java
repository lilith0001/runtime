class Selection
{
	public static void main(String[] args)
	{
		int n = Integer.valueOf(args[0]);
		int[] A = new int[n];	
		int[] B = new int[n];
		for(int i=0; i<n; i++)
			A[i] = i;
		int k = 0;
		for (int i = n - 1; i >= 0; i--)
		{
			B[k] = A[i];
			k++;
		}
		int minIndex;
		int min;
		final long startTime, endTime;

		startTime = System.nanoTime();
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
			int temp = B[i];
			B[i] = min;
			B[minIndex] = temp;	
		}
		endTime = System.nanoTime();
		System.out.println((long)((endTime - startTime) / 1000)); // µs
	}
}
