using System;
using System.Text;

namespace beakjoon
{
    class _3
    {
        static int range, length, count;
        // 값 출력을 위한 정수 배열
        static int[] arr = new int[9];
        // 중복 제거를 위한 bool 배열
        static bool[] visited = new bool[9];
        // 중복 제거를 위한 bool 배열

        static StringBuilder output = new StringBuilder();
        //DFS 알고리즘
        public static void DFS(int cnt, int max)
        {
            if (cnt == length)
            {
                StringBuilder sb = new StringBuilder();

                for (int i = 0; i < length; i++)
                {
                    sb.Append($"{arr[i]} ");
                }
                output.AppendLine(sb.ToString());
                count += 1;

                if (count == max)
                    Console.WriteLine(output);
            }
            // 문자열 완성이 안됬을 시 반복
            else
            {
                for (int i = 1; i <= range; i++)
                {    
                    arr[cnt] = i;
                    // 재귀 호출
                    DFS(cnt + 1, max);
                }
            }
        }

        public static void Main(string[] args)
        {
            string temp = Console.ReadLine();
            StringBuilder output = new StringBuilder();
            string[] read = temp.Split(' ');

            //수열의 범위 
            range = Int32.Parse(read[0]);

            //문자열의 길이
            length = Int32.Parse(read[1]);

            //한줄씩이 아닌 한번에 출력하기 위한 조건
            int max = range;

            //4 2 가 들어오면 1이 4번 반복된다 4 3 이 들어오면 1이 16번 반복된다.
            for (int i = 0; i < length - 1; i++)
            {
                max *= range;
            }

            DFS(0, max);
            Console.WriteLine(output);
            Console.ReadKey();
        }
    }
}