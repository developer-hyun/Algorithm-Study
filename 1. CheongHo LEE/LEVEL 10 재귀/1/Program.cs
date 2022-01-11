using System;

namespace _1
{
    class Program
    {
        static void Main(string[] args)
        {
            int N = Convert.ToInt32(Console.ReadLine());
            int sum = 1;
            int output = Factorial(N, sum);
            Console.WriteLine("output : " + output);
        }

        public static int Factorial(int N, int sum)
        {
            if (N <= 0)
            {
                N = 1;
                sum *= N;
                return sum;
            }
            sum *= N;

            return Factorial((N-1), sum);
        }
    }
}
