using System;
using System.Text;

namespace beakjoon
{
    class _5
    {
        static int N;

        // 값 출력을 위한 정수 배열
        static int count;

        // 세로영역 즉, 같은 줄에는 둘 수 없게 하기 위한 배열
        static bool[] isY = new bool[14];
        //우상향 대각선에 둘 수 없게 하기 위한 배열
        static bool[] isDiagonal1 = new bool[27];
        //우하향 대각선에 둘 수 없게 하기 위한 배열
        //배열이 많은 이유는 4x4체스판에서 (0,3)에 퀸을 두게 되면 x-y가 -3 이므로 음수를 둘 수 없기 때문에 +3을 해줘야함 이 값이 (n-1)임
        static bool[] isDiagonal2 = new bool[40];

        //DFS 알고리즘
        public static void NQueen(int cnt)
        {
            // 출력할 배열이 완성되면 문자열 출력
            if (cnt == N)
            {
                count++;
                return;
            }

            // 문자열 완성이 안됬을 시 반복
            else
            {
                for (int i = 0; i < N; i++)
                {
                    if (isY[i] || isDiagonal1[i + cnt] || isDiagonal2[cnt - i + N - 1])
                        continue;

                    isY[i] = true;
                    isDiagonal1[i + cnt] = true;
                    isDiagonal2[cnt - i + N - 1] = true;
                    NQueen(cnt + 1);
                    isY[i] = false;
                    isDiagonal1[i + cnt] = false;
                    isDiagonal2[cnt - i + N - 1] = false;

                }
            }
        }

        public static void Main(string[] args)
        {
            N = Convert.ToInt32(Console.ReadLine());

            NQueen(0);

            Console.WriteLine(count);

            Console.ReadKey();
        }
    }
}