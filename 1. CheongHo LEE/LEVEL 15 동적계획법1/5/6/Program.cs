using System;
namespace PracticeAlgo
{
    class Program
    {
        static int N;
        static int[,] ColorCost;
        static int[,] totalCost;
        static void Main(string[] args)
        {
            {
                N = int.Parse(Console.ReadLine());
                ColorCost = new int[N, 3];
                totalCost = new int[N, 3];
                for (int n = 0; n < N; n++)
                {
                    var buf = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
                    ColorCost[n, 0] = buf[0];
                    ColorCost[n, 1] = buf[1];
                    ColorCost[n, 2] = buf[2];
                    SumLowCost(n);
                }
                Console.WriteLine(Math.Min(totalCost[N - 1, 0], Math.Min(totalCost[N - 1, 1], totalCost[N - 1, 2])));
            }
        }
        static void SumLowCost(int count)
        {
            if (count == 0)
            {
                totalCost[count, 0] = ColorCost[count, 0];
                totalCost[count, 1] = ColorCost[count, 1];
                totalCost[count, 2] = ColorCost[count, 2];
            }
            else
            {
                totalCost[count, 0] = Math.Min(totalCost[count - 1, 1], totalCost[count - 1, 2]) + ColorCost[count, 0];
                totalCost[count, 1] = Math.Min(totalCost[count - 1, 0], totalCost[count - 1, 2]) + ColorCost[count, 1];
                totalCost[count, 2] = Math.Min(totalCost[count - 1, 0], totalCost[count - 1, 1]) + ColorCost[count, 2];
            }
        }
    }
}
