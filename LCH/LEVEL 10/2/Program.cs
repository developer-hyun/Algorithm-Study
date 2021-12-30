using System;

namespace _2
{
    class Program
    {
        static void Main(string[] args)
        {
            int N = Convert.ToInt32(Console.ReadLine());
            int F = 0;
            int FMinus1 = 0;
            int FMinus2 = 1;
            int count = 1;
            int output = Fibonacci(N, F, count, FMinus1, FMinus2);

            Console.WriteLine(output);
        }

        public static int Fibonacci(int N, int F, int count, int FMinus1,  int FMinus2)
        {
            if (N == 0)
                return 0;
            else if (N == 1)
                return 1;

            if (count == N)
                return F;

            F = FMinus1 + FMinus2;
            count += 1;
            Console.WriteLine("F : {0}, FMinus1 : {1}, FMinus2 : {2}, count : {3}", F, FMinus1 ,FMinus2, count);
            FMinus1 = FMinus2;
            FMinus2 = F;
            return Fibonacci(N, F, count, FMinus1, FMinus2);
        }
    }

}
