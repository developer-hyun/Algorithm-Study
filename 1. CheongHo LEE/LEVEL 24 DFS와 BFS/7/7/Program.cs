using System;
using System.Collections.Generic;
namespace _7
{
    class Program
    {
        static int N, K;

        //맵 저장 행렬
        static int[] map = new int[100001];
        //방문 확인 행렬
        static bool[] visited = new bool[100001];

        static int[] disMap = new int[100001];

        static Queue<int> queue = new Queue<int>();

        static int count = 0;
        static void Reset() //초기화
        {
            for (int i = 0; i < 100000; i++)
            {
                    visited[i] = false;
                    map[i] = 0;
                    disMap[i] = 0;
            }
        }
        static void BFS(int x)
        {
            queue.Enqueue(x);
            visited[x] = true;
            Console.WriteLine(queue.Count);
            while (queue.Count!=0)
            {
                count += 1;
                var cur = queue.Dequeue();

                //pop됐을때의 x좌표와 y좌표
                int curx = cur;
                
                //Console.Write("count : " + count);
                //상하좌우 체크
                if(curx - 1 < 100001 &&  curx - 1 > 0) //&& visited[curx - 1] == false)
                {
                    //Console.Write(" 빼기 : " + (curx - 1));
                    //이미 방문했거나 해당 집이 0이면 continue
                    visited[curx - 1] = true;
                    queue.Enqueue((curx - 1));
                    if (disMap[curx - 1] == 0)
                    {
                        disMap[curx - 1] = 1;
                        disMap[curx - 1] += disMap[cur];
                    }
                }
                if (curx + 1 > 0 && curx + 1 < 100000)// && visited[curx + 1] == false)
                {
                    //Console.Write(" 더하기 : " + (curx + 1));
                    visited[curx + 1] = true;
                    queue.Enqueue((curx + 1));
                    if (disMap[curx + 1] == 0)
                    {
                        disMap[curx + 1] = 1;
                        disMap[curx + 1] += disMap[cur];
                    }
                }
                if (curx*2 > 0 && curx *2 < 100000)// && visited[curx*2] == false)
                {
                    //Console.Write(" 곱하기 : " + (curx*2));
                    //이미 방문했거나 해당 집이 0이면 continue
                    visited[curx * 2] = true;
                    queue.Enqueue((curx * 2));
                    if (disMap[curx * 2] == 0)
                    {
                        disMap[curx * 2] = 1;
                        disMap[curx * 2] += disMap[cur];
                    }
                }
                //Console.WriteLine();
            }

        }
        static void Main(string[] args)
        {
            int[] inputdata = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            N = inputdata[0];
            K = inputdata[1];

            Reset();
            //map배열 초기화

            disMap[N] = 1;
            BFS(N);

            if (N == K)
                Console.WriteLine(0);
            else 
                Console.WriteLine(disMap[K]-1);

        }
    }
}

