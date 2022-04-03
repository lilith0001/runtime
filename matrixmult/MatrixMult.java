class MatrixMult
{
    public static void main(String[] args)
    {
		int n = Integer.valueOf(args[0]);
        int[][] A = new int[n][n];
        int[][] B = new int[n][n];
        int[][] C = new int[n][n];
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
            {
                A[i][j] = i + j;
                B[i][j] = i + j;
            }
        final long startTime, endTime;

        startTime = System.nanoTime();
		for(int i=0; i<n; i++)
			for(int j=0; j<n; j++)
				for(int k=0; k<n; k++)
					C[i][j] += A[i][k]*B[k][j];
		endTime = System.nanoTime();
		
        System.out.println((long)((endTime - startTime) / 1000));
    }
}