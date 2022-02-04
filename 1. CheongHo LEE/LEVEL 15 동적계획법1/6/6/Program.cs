using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _6
{
    class Program
    {
        static int N;
        static int[] outputTable;
        static int[,] IntTriangle;
        static int[,] LeftTriangle;
        static int[,] RightTriangle;
        static int[,] TotalTriangle;
        static void Main(string[] args)
        {
            {
                N = int.Parse(Console.ReadLine());
                //현재 정수 배열
                IntTriangle = new int[N, N];
                //최대 정수 저장 배열
                TotalTriangle = new int[N, N];

                outputTable = new int[N];
                for (int n = 0; n < N; n++)
                {
                    var buf = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
                    //2차원배열 채우기
                    for (int j = 0; j < buf.Length; j++)
                    {
                        IntTriangle[n, j] = buf[j];
                    }
                }

                MaxIntTriangle();

                for (int i = 0; i < N; i++)
                {
                    if(i == N-1)
                    {
                        for (int j = 0; j < i+1; j++)
                        {
                            outputTable[j] = TotalTriangle[i, j]; 
                        }
                    }
                }
                Console.WriteLine(outputTable.Max());
            }
        }
        static public void MaxIntTriangle()
        {
            for (int i = 0; i < N; i++)
            {                
                if (i == 0)
                    TotalTriangle[i, 0] = IntTriangle[i, 0];
                else
                {
                    for (int j = 0; j < i+1; j++)
                    {
                        if(j == 0)
                            TotalTriangle[i, j] = TotalTriangle[i - 1, j] + IntTriangle[i, 0];
                        else
                            TotalTriangle[i, j] = Math.Max(TotalTriangle[i - 1, j-1], TotalTriangle[i - 1, j]) + IntTriangle[i, j];
                    }
                }                
            }
        }
    }
}
