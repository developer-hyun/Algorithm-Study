using System;
using System.Linq;
using System.Text;
namespace _2
{
    class Program
    {
        static int N = Convert.ToInt32(Console.ReadLine());
        static int[] A = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
        static int M = Convert.ToInt32(Console.ReadLine());
        static int[] M_Array = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
        static StringBuilder sb = new StringBuilder();


        static void Main(string[] args)
        {
            int N = Convert.ToInt32(Console.ReadLine());
            int[] A = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            int M = Convert.ToInt32(Console.ReadLine());
            int[] M_Array = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            StringBuilder sb = new StringBuilder();

            int[] array = new int[20000001];
            for (int i = 0; i < N; i++)
            {
                int tmp = A[i] + 10000000;
                array[tmp]++;
            }
            for (int i = 0; i < M; i++)
            {
                int tmp = M_Array[i] + 10000000;
                sb.Append(array[tmp] + " ");
            }

            Console.WriteLine(sb);
        }
    }
}
