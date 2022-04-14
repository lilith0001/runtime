class fibonacci {
    public static void main(String[] args)
    {
        int n = Integer.valueOf(args[0]);

        final long startTime, endTime;
        startTime = System.nanoTime();

        // Get n-th Fibonacci number
        long a = 0, b = 1, tmp;
        for (int i = 0; i < n - 1; i++) {
            tmp = a;
            a = b;
            b = tmp + b;
        }

        endTime = System.nanoTime();

        // Print execution time in microseconds
        System.out.println((int)((endTime - startTime) / 1000));
    }
}
