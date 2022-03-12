using System;
using System.Collections.Generic;
namespace _3
{
    class Program
    {
        static int N,M;

        //맵 저장 행렬
        static int[,] map = new int[101, 101];
        //단지내의 집의 수 저장 행렬
        static int[] houseCount = new int[1000];
        //방문 확인 행렬
        static bool[,] visited = new bool[101, 101];

        static int[,] disMap = new int[101, 101];

        static Queue<(int, int)> queue = new Queue<(int, int)>();

        static int[] dx = { -1, 1, 0, 0 };
        static int[] dy = { 0, 0, -1, 1 };

        //단지수
        static int count = 0;


        static void Reset() //초기화
        {
            for (int i = 0; i <N; i++)
            {
                for (int j = 0; j < M; j++)
                {
                    visited[i, j] = false;
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
                //Console.WriteLine("curx : " + curx + " cury : " + cury + " count : " + count);
                
                //상하좌우 체크
                for (int i = 0; i < 4; i++)
                {
                    curx = cur.Item1 + dx[i];
                    cury = cur.Item2 + dy[i];
                    //인덱스 범위를 벗어나면 continue
                    if (curx < 0 || cury < 0 || curx > N || cury > M)
                        continue;
                    //이미 방문했거나 해당 집이 0이면 continue
                    if (visited[curx, cury] == true || map[curx, cury] == 0)
                        continue;
                    visited[curx, cury] = true;
                    queue.Enqueue((curx, cury));

                    //아까 Pop했던 정보를 기억해두고 거리 맵 배열에 += 해줌
                    disMap[curx, cury] += disMap[cur.Item1, cur.Item2];
                }
            }

        }
        static void Main(string[] args)
        {
            int[] inputdata  = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            N = inputdata[0];
            M = inputdata[1];
            
            //map배열 초기화
            for (int i = 0; i < N; i++)
            {
                string input = Console.ReadLine();
                for (int j = 0; j < input.Length; j++)
                {
                    map[i, j] = Convert.ToInt32((input[j].ToString()));
                    disMap[i, j] = Convert.ToInt32((input[j].ToString()));
                }
            }

            //방문 배열 초기화
            Reset();

            //map배열을 순회하면서 단지를 찾음
            //단지를 찾는순간 bfs를 돌아 단지내의 집수가 몇인지 찾음
            BFS(0, 0);

            //for (int i = 0; i < N; i++)
            //{
            //    for (int j = 0; j < M; j++)
            //    {
            //        Console.Write(disMap[i, j] + " ");
            //    }
            //    Console.WriteLine();
            //}
            Console.WriteLine(disMap[N-1,M-1]);

        }
    }
}
