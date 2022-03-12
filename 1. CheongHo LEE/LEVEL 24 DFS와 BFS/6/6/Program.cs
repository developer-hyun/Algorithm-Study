using System;
using System.Collections.Generic;
namespace _6
{
    class Program
    {
        static int N, M;

        //맵 저장 행렬
        static int[,] map = new int[1001, 1001];
        //방문 확인 행렬
        static bool[,] visited = new bool[1001, 1001];

        static int[,] disMap = new int[1001, 1001];

        static Queue<(int, int)> queue = new Queue<(int, int)>();

        static int[] dx = { -1, 1, 0, 0 };
        static int[] dy = { 0, 0, -1, 1 };

        static void Reset() //초기화
        {
            for (int i = 0; i < N-1; i++)
            {
                for (int j = 0; j < M-1; j++)
                {
                    visited[i, j] = false;
                    map[i, j] = -1;
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
                    if (curx < 0 || cury < 0 || curx >= N || cury >= M)
                        continue;
                    //이미 방문했거나 해당 집이 0이면 continue
                    if (visited[curx, cury] == true || map[curx,cury] == -1)
                        continue;
                    visited[curx, cury] = true;
                    queue.Enqueue((curx, cury));
               
                    if (disMap[curx, cury] == 0)
                    {
                        disMap[curx, cury] = 1;
                        disMap[curx, cury] += disMap[cur.Item1, cur.Item2];
                    }
                       
                }
            }

        }
        static void Main(string[] args)
        {
            int[] inputdata = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            N = inputdata[1];
            M = inputdata[0];

            Reset();
            //map배열 초기화

            for (int i = 0; i < N; i++)
            {
                int[] input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
                for (int j = 0; j < input.Length; j++)
                {
                    map[i, j] = Convert.ToInt32((input[j].ToString()));
                    disMap[i, j] = Convert.ToInt32((input[j].ToString()));
                }
            }

            //map배열을 순회하면서 단지를 찾음
            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < M; j++)
                {
                    if (map[i, j] == 1)
                    {
                        queue.Enqueue((i, j));
                    }
                }
            }
            BFS(queue.Peek().Item1,queue.Peek().Item2);
            //Console.WriteLine("----------기본 맵 배열-----------");
            //for (int i = 0; i <= N; i++)
            //{
            //    for (int j = 0; j <= M; j++)
            //    {
            //        Console.Write(map[i, j] + " ");
            //    }
            //    Console.WriteLine();
            //}
            //Console.WriteLine("----------거리 맵 배열-----------");
            //for (int i = 0; i <= N; i++)
            //{
            //    for (int j = 0; j <= M; j++)
            //    {
            //        Console.Write(disMap[i, j] + " ");
            //    }
            //    Console.WriteLine();
            //}
            bool zeroCheck = false;
            int max = 0;
            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < M; j++)
                {
                    if(max <= disMap[i, j])
                        max = disMap[i, j];
                    if (disMap[i, j] == 0)
                        zeroCheck = true;
                }
            }
            if(zeroCheck)
                Console.WriteLine(-1);
            else
            {
                if (max == 0)
                    Console.WriteLine(max);
                else
                    Console.WriteLine(max - 1);
            }

        }
    }
}

