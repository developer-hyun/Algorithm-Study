using System;

namespace _6
{
    class Program
    {
        static void Main(string[] args)
        {
            int T = Convert.ToInt32(Console.ReadLine());
            for (int K = 0; K < T; K++)
            {
                int k = Convert.ToInt32(Console.ReadLine()); //층
                int n = Convert.ToInt32(Console.ReadLine()); //호
                int person = 0;
                int[,] room = new int[n, k + 1]; //4층에 3호를 구하고 싶으면 0층 1호를 (1,1)으로 기준점을 잡고 (3,4)를 구한다.
                int[] Floor0 = new int[n];

                for (int i = 0; i < n; i++) //0층 값 채우기
                    room[i, 0] = i + 1;

                for (int i = 1; i < k + 1; i++) //1호 값 채우기
                    room[0, i] = 1;


                for (int i = 1; i < k + 1; i++)
                {
                    Console.WriteLine("시작 : " + i);
                    for (int j = 1; j < n; j++)
                    {
                        room[j, i] = room[j, i - 1] + room[j - 1, i]; //4층 4호에 사는사람은 4층 3호에 사는 사람 수 + 3층 4호에 사는 사람 수
                    }
                }


                person += room[n - 1, k];

                Console.WriteLine(person);
            }
        }
    }
}
