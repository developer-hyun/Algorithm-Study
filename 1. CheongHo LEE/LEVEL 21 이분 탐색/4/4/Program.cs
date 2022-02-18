using System;

namespace _4
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] N_M = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            int N = N_M[0];
            int M = N_M[1];

            int[] wood = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);

            Array.Sort(wood);
            long start = 1;
            long end = wood[^1];
            long mid = (start + end) / 2;
            long sum = 0;


            while (start <= end)
            {
                 sum = 0;
                for (int i = 0; i < N; i++)
                {
                    if (wood[i] < mid )
                        continue;
                    sum += wood[i] - mid;
                }
                if(sum >= M)
                {
                    start = mid+1;
                    mid = (start + end) / 2;
                }
                else
                {
                    end = mid -1 ;
                    mid = (start + end) / 2;
                }
            }

            Console.WriteLine(mid);

        }
    }
}

