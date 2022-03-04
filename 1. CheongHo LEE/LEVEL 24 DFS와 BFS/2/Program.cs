using System;
using System.Collections.Generic;
namespace _2
{
    class Program
    {
        static int N;
        static int M;

        static int count;

        static public int[,] map = new int[101, 101];
        static public bool[] visited = new bool[101];

        static public Queue<int> queue = new Queue<int>();

        static void Reset()
        {
            for (int i = 1; i <= N; i++)
            {
                visited[i] = false;
            }
        }
        static void BFS()
        {
            queue.Enqueue(1);
            visited[1] = true;

            int start;

            while (queue.Count != 0)
            {
                //큐에서 나오는 값을 시작변수로 계속 바꿔줘야함
                start = queue.Dequeue();
                count++;
                for (int i = 1; i <= N; i++)
                {
                    if (map[start, i] == 1 && visited[i] == false)
                    {
                        queue.Enqueue(i);
                        visited[i] = true;
                    }
                }
            }
        }
        static void Main(string[] args)
        {
            N = Convert.ToInt32(Console.ReadLine());
            M = Convert.ToInt32(Console.ReadLine());

            for (int i = 0; i < M; i++)
            {
                int[] mArray = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
                map[mArray[0], mArray[1]] = 1;
                map[mArray[1], mArray[0]] = 1;
            }

            Reset();
            BFS();
            Console.WriteLine(count-1);
        }
    }
}
