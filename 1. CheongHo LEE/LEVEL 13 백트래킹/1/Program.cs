using System;
using System.Text;

namespace beakjoon
{
    class _1
    {
        static int range, length;
        // 값 출력을 위한 정수 배열
        static int[] arr = new int[9];
        // 중복 제거를 위한 bool 배열
        static bool[] visited = new bool[9];

        //DFS 알고리즘
        public static void DFS(int cnt)
        {
            // 출력할 배열이 완성되면 문자열 출력
            if (cnt == length)
            {
                StringBuilder sb = new StringBuilder();

                for (int i = 0; i < length; i++)
                    sb.Append($"{arr[i]} ");

                Console.WriteLine(sb);
            }

            // 문자열 완성이 안됬을 시 반복
            else
            {
                for (int i = 1; i <= range; i++)
                {
                    // 중복이 아닐 시
                    if (!visited[i])
                    {
                        visited[i] = true;
                        arr[cnt] = i;
                        // 재귀 호출
                        DFS(cnt + 1);

                        // 다음 문자열 생성을 위해 bool 초기화
                        visited[i] = false;
                    }
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
        }
    }
}