class Sum {
    public static void main(String[] args)
    {
		int input = Integer.valueOf(args[0]);
		int[] lst = new int[input];
		for(int i = 0; i < input; i++)
			lst[i] = i;
		long sum = 0;
		final long startTime, endTime;

		startTime = System.nanoTime();
		for(int i = 0; i < input; i++)
			sum += lst[i];
		endTime = System.nanoTime();

		System.out.println((int)((endTime - startTime) / 1000));
    }
}
