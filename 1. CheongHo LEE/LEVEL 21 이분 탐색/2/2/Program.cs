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

        static public void BinarySearch()
        {

            Array.Sort(A); // A = {1 2 3 4 5}
            for (int i = 0; i < M; i++)
            {
                int index = Array.BinarySearch(A,0,A.Length, M_Array[i]);
                //Console.WriteLine("index : " + index);
                if (index < 0)
                {
                    sb.Append("0 ");
                }
                else
                {
                    sb.Append(index+ " ");
                }

                //내가 찾고자 하는 값
                int target = M_Array[i];
                //이진탐색의 시작점
                int start = 0;
                //이진탐색의 끝점
                int end = A.Length - 1;
                //이진탐색의 가운데점
                int mid = (start + end) / 2;

            }

        }
        static void Main(string[] args)
        {
            BinarySearch();
            Console.WriteLine(sb);
        }
    }
}

