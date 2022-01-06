using System;

namespace _3
{
    class Program
    {
        static void Main(string[] args)
        {
            int N = Convert.ToInt32(Console.ReadLine());
            int count = 1;
            int start = 3;
            int end = 3;


            string[,] star = new string[N,N];
           

            makeStar(N, count, start, end, star);

            for (int i = 0; i < star.GetLength(0); i++)
            {
                for (int j = 0; j < star.GetLength(1); j++)
                {
                    Console.Write(star[i, j]);
                }
                Console.WriteLine();
            }
        }

        public static string[,] makeStar(int N, int count, int start, int num, string[,] star)
        {
            if (N == count)
                return star;

            for (int i = (start / 3)-1; i < num; i++)
            {
                for (int j = (start / 3) - 1; j < num; j++)
                {
                    if (i == N / 3 && j == N / 3)
                    {
                        star[i, j] = " ";
                        continue;
                    }
                    star[i, j] = "*";
                }
            }

            for (int i = N/3; i < N/3+1; i++)
            {
                for (int j = N/3; j < N/3+1; j++)
                {
                    star[i, j] = " ";
                }
            }
            count *= 3;

            return makeStar(N, count, start+3, num+3, star);
        }
    }
}
