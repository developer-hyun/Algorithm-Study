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
                //현재 비용 배열
                ColorCost = new int[N, 3];
                //최소 비용 저장 배열
                totalCost = new int[N, 3];
                for (int n = 0; n < N; n++)
                {
                    var buf = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
                    //2차원배열 채우기
                    ColorCost[n, 0] = buf[0];
                    ColorCost[n, 1] = buf[1];
                    ColorCost[n, 2] = buf[2];
                }
                for (int i = 0; i < N; i++)
                {
                    if (i == 0)
                    {
                        totalCost[i, 0] = ColorCost[i, 0];
                        totalCost[i, 1] = ColorCost[i, 1];
                        totalCost[i, 2] = ColorCost[i, 2];
                    }
                    else
                    {
                        //0 = R, 1 = G, 2 = B 일때
                        //R를 고른다면 이전 G과 B중에 최소값과 현재 R값을 더한다.
                        //위 과정을 R,G,B 모두에게 실행한다.
                        totalCost[i, 0] = Math.Min(totalCost[i - 1, 1], totalCost[i - 1, 2]) + ColorCost[i, 0];
                        totalCost[i, 1] = Math.Min(totalCost[i - 1, 0], totalCost[i - 1, 2]) + ColorCost[i, 1];
                        totalCost[i, 2] = Math.Min(totalCost[i - 1, 0], totalCost[i - 1, 1]) + ColorCost[i, 2];
                    }
                }
                Console.WriteLine(Math.Min(totalCost[N - 1, 0], Math.Min(totalCost[N - 1, 1], totalCost[N - 1, 2])));
            }
        }
    }
}
