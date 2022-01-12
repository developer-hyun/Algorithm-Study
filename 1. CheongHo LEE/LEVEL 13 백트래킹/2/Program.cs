using System;
using System.Text;

namespace beakjoon
{
    class _2
    {
        static int range, length;
        // 값 출력을 위한 정수 배열
        static int[] arr = new int[9];
        // 배열이 오름차순인지 확인하기 위한 배열
        static int[] arrSort = new int[9];
        // 중복 제거를 위한 bool 배열
        static bool[] visited = new bool[9];
        // 한번이라도 쓴적이 있는지를 확인하기 위한 bool 배열
        static bool[] isUsed = new bool[9];

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
                    // 1로 시작하는 모든 조합을 봤다면 2로 넘어갈때는 다시 초기화를 해줘야한다
                    // 왜냐하면 하지 않으면 1,2,3,4 모두 true되어있는 상태일테니 말이다.
                    // 그래야 2,3,4 같은값을체크 할수 있다.
                    //for (int j = 1; j <= range; j++)
                    //{
                    //    visited[j] = false;
                    //}
                    // 중복이 아닐 시
                    if (!visited[i])
                    {
                        visited[i] = true;
                        if ((cnt > 0 && arr[cnt - 1] < i) || cnt == 0)
                            arr[cnt] = i;
                        else
                            continue;
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

            Console.ReadKey();
        }
    }
}