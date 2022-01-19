using System;
using System.Text;

namespace beakjoon
{
    class _4
    {
        static int range, length;
        // 값 출력을 위한 정수 배열
        static int[] arr = new int[9];
        // 배열이 오름차순인지 확인하기 위한 배열

        //DFS 알고리즘
        public static void DFS(int cnt)
        {
            // 출력할 배열이 완성되면 문자열 출력
            if (cnt == length)
            {
                StringBuilder sb = new StringBuilder();

                for (int i = 0; i < length; i++)
                {
                    sb.Append($"{arr[i]} ");
                }

                Console.WriteLine(sb);
            }

            // 문자열 완성이 안됬을 시 반복
            else
            {
                for (int i = 1; i <= range; i++)
                {
                    if ((cnt > 0 && arr[cnt - 1] <= i) || cnt == 0)
                    {
                        arr[cnt] = i;
                    }
                    else
                    {
                        continue;
                    }
                    // 재귀 호출
                    DFS(cnt + 1);

                    
                }
            }
        }

        public static void Main(string[] args)
        {
            string temp = Console.ReadLine();

            string[] read = temp.Split(' ');

            //수열의 범위 
            range = Int32.Parse(read[0]);

            //문자열의 길이
            length = Int32.Parse(read[1]);

            DFS(0);

            Console.ReadKey();

        }
    }
}