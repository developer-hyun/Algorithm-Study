using System;
using System.Collections.Generic;
namespace _4
{
    class Program
    {
        static int N;

        //맵 저장 행렬
        static int[,] map = new int[26, 26];
        //단지내의 집의 수 저장 행렬
        static int[] houseCount = new int[1000];
        //방문 확인 행렬
        static bool[,] visited = new bool[26, 26];

        static Queue<(int, int)> queue = new Queue<(int, int)>();

        static int[] dx = { -1, 1, 0, 0 };
        static int[] dy = { 0, 0, -1, 1 };

        //단지수
        static int count = 0;
        //단지내의 집수
        static int count2 = 0;

        static void Reset() //초기화
        {
            for (int i = 1; i <= N; i++)
            {
                for (int j = 1; j <= N; j++)
                {
                    visited[i, j] = false;
                }
            }
        }
        static void BFS(int x, int y, int count)
        {
            count2 = 0;
            queue.Enqueue((x, y));
            visited[x, y] = true;

            while (queue.Count != 0)
            {
                var cur = queue.Dequeue();
                //pop할때마다 집의 수 새도록
                count2++;
                //pop됐을때의 x좌표와 y좌표
                int curx = cur.Item1;
                int cury = cur.Item2;
                //상하좌우 체크
                for (int i = 0; i < 4; i++)
                {
                    curx = cur.Item1 + dx[i];
                    cury = cur.Item2 + dy[i];
                    //인덱스 범위를 벗어나면 continue
                    if (curx < 0 || cury < 0 || curx > N || cury > N)
                        continue;
                    //이미 방문했거나 해당 집이 0이면 continue
                    if (visited[curx, cury] == true || map[curx, cury] == 0)
                        continue;
                    visited[curx, cury] = true;
                    queue.Enqueue((curx, cury));
                }
            }
            //단지내의 집 수 저장 나중에 오름차순 정렬해야함
            houseCount[count - 1] = count2;

        }
        static void Main(string[] args)
        {
            N = Convert.ToInt32(Console.ReadLine());

            //map배열 초기화
            for (int i = 1; i <= N; i++)
            {
                string input = Console.ReadLine();
                for (int j = 0; j < input.Length; j++)
                {
                    map[i, j + 1] = Convert.ToInt32((input[j].ToString()));
                }
            }

            //방문 배열 초기화
            Reset();

            //나중에 단지내의 집수는 오름차순 정렬해야하므로
            //미리 엄청 큰 수로 저장을 해놓으면 실제 단지내의 집 수가 들어왔을때
            //그 숫자들이 앞으로 와서 정렬될 수 있도록 일부로 큰수로 초기화해둠
            for (int i = 0; i < houseCount.Length; i++)
            {
                houseCount[i] = 1000000;
            }

            //map배열을 순회하면서 단지를 찾음
            //단지를 찾는순간 bfs를 돌아 단지내의 집수가 몇인지 찾음
            for (int i = 1; i <= N; i++)
            {
                for (int j = 1; j <= N; j++)
                {
                    if (map[i, j] == 1 && visited[i, j] == false)
                    {
                        //총 단지의 수 확인용
                        count++;
                        BFS(i, j, count);
                    }
                }
            }

            Console.WriteLine(count);

            //오름차순 정렬
            Array.Sort(houseCount);

            //단지내의 집 수 출력
            for (int i = 0; i < count; i++)
            {
                Console.WriteLine(houseCount[i]);
            }
        }
    }
}
