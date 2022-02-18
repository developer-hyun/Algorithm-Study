using System;

namespace _5
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] N_C = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            int N = N_C[0];
            int C = N_C[1];

            int[] X = new int[N];
            for (int i = 0; i < N; i++)
            {
                X[i] = Convert.ToInt32(Console.ReadLine());
            }

            Array.Sort(X);

            long start = 1;
            long end = X[^1];
            long mid = (start + end) / 2;

            long max = 0;
            long min = 0;
            while (start <= end)
            {
                int count = 0;
                int tmp = 0;
                min = 1000000001;
                for (int i = 0; i < N; i++)
                {

                    if (i == 0)
                    {
                        count++;
                        tmp = X[i];
                    }
                    else 
                    {
                        if (X[i] - tmp <= mid)
                        {
                            //Console.WriteLine("X[i] - tmp : " + (X[i] - tmp) + " X[i] : " + X[i] + " tmp : " + tmp);
                            count++;
                            //if (X[i] - tmp <= min)
                            //{
                            //    min = X[i] - tmp;
                            //    //Console.WriteLine("min : " + min);
                            //}
                            //tmp = X[i];
                        }
                    }
                }
                Console.WriteLine("count : " + count + " C : " + C);
                if (count >= C)
                {
                    start = mid + 1;
                    mid = (start + end) / 2;
                }
                else
                {
                    end = mid - 1;
                    mid = (start + end) / 2;
                }
                Console.WriteLine("끝start : " + start + " end : " + end + " mid : " + mid);
            }

            Console.WriteLine(mid);


        }
    }
}
