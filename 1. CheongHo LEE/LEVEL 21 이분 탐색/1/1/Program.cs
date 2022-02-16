using System;
using System.Linq;
using System.Text;
namespace _1
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
                //내가 찾고자 하는 값
                int target = M_Array[i];
                //이진탐색의 시작점
                int start = 0;
                //이진탐색의 끝점
                int end = A.Length - 1;
                //이진탐색의 가운데점
                int mid = (start + end) / 2;

                while(true)
                {
                    if(A[mid] == target)
                    {
                        sb.AppendLine("1");
                        break;
                    }                    
                    else if(start > end)
                    {
                        sb.AppendLine("0");
                        break;
                    }
                    //타겟이 가운데점보다 작다는 뜻은
                    //가운데보다 왼쪽에 있다는 의미이므로
                    //end =  mid - 1
                    else if(A[mid] > target)
                    {
                        end = mid - 1;
                        mid = (start + end) / 2;
                    }
                    //타겟이 가운데점보다 크다는 뜻은
                    //가운데보다 오른쪽에 있다는 의미이므로
                    //start =  mid + 1
                    else if (A[mid] <= target)
                    {
                        start = mid + 1;
                        mid = (start + end) / 2;
                    }
                }
            }

        }
        static void Main(string[] args)
        {
            BinarySearch();
            Console.WriteLine(sb);
        }
    }
}
