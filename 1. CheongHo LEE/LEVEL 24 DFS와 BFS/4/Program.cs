using System;
using System.Collections.Generic;
namespace _4
{
    class Program
    {
        static int T,M,N,K;

        //맵 저장 행렬
        static int[,] map = new int[51, 51];
        //방문 확인 행렬
        static bool[,] visited = new bool[51, 51];

        static Queue<(int, int)> queue = new Queue<(int, int)>();

        static int[] dx = { -1, 1, 0, 0 };
        static int[] dy = { 0, 0, -1, 1 };

        //배추흰지렁이 수
        static int count;

        static void Reset() //초기화
        {            
            count = 0;
            for (int i = 0; i < M; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    visited[i, j] = false;
                    map[i, j] = 0;
                }
            }
        }
        static void BFS(int x, int y)
        {
            queue.Enqueue((x, y));
            visited[x, y] = true;

            while (queue.Count != 0)
            {
                var cur = queue.Dequeue();
                //pop됐을때의 x좌표와 y좌표
                int curx = cur.Item1;
                int cury = cur.Item2;
                //상하좌우 체크
                for (int i = 0; i < 4; i++)
                {
                    curx = cur.Item1 + dx[i];
                    cury = cur.Item2 + dy[i];
                    //인덱스 범위를 벗어나면 continue
                    if (curx < 0 || cury < 0 || curx > N || cury > M)
                        continue;
                    //이미 방문했거나 해당 배추가 0이면 continue
                    if (visited[curx, cury] == true || map[curx, cury] == 0)
                        continue;
                    visited[curx, cury] = true;
                    queue.Enqueue((curx, cury));
                }
            }

        }
        static void Main(string[] args)
        {
            T = Convert.ToInt32(Console.ReadLine());

            for (int m = 0; m < T; m++)
            {
                int[] inputdata = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);

                M = inputdata[0];
                N = inputdata[1];
                K = inputdata[2];

                //방문,맵 배열 및 count초기화
                Reset();

                //배추 심기
                for (int j = 0; j < K; j++)
                {
                    int[] spot = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
                    map[spot[1], spot[0]] = 1;
                }

                //map배열을 순회하면서 배추를 찾음
                for (int j = 0; j < N; j++)
                {
                    for (int k = 0; k < M; k++)
                    {
                        if (map[j, k] == 1 && visited[j, k] == false)
                        {                            
                            BFS(j, k);
                            count++;
                        }
                    }
                }
                Console.WriteLine(count);
            }


        }
    }
}
