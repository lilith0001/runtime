class fibonacci {
    public static void main(String[] args)
    {
        int n = Integer.valueOf(args[0]);
        int sum;

        final long startTime, endTime;
        startTime = System.nanoTime();
            sum = fib(n);
        endTime = System.nanoTime();
            
		System.out.println((int)((endTime - startTime) / 1000));
    }
    
    static int fib(int n)
    {
        if (n < 3)
            return 1;
        else
            return fib(n-1) + fib(n-2);
    }
}
