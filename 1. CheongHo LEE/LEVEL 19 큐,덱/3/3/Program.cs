using System;
using System.Collections.Generic;
namespace _3
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] NK = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            int[] output = new int[7];
            Queue<int> q = new Queue<int>();            

            //초기화
            for (int i = 1; i <= NK[0]; i++)
            {
                q.Enqueue(i);
            }
            Console.Write("<");

            //큐가 모두 없어졌을때까지 반복
            while(q.Count != 0)
            {             
                //앞에 두 숫자를 2번 큐 뒤에 연결
                //그리고 앞에 두 숫자를 제거
                for (int i = 0; i < NK[1]-1; i++)
                {
                    q.Enqueue(q.Peek());
                    q.Dequeue();
                }
                //3번째가 됐을때 그 수를 제거하면서 출력
                //이 수는 큐에 다시 넣지 않음
                Console.Write(q.Dequeue());

                //아직 제거해야할 값들이 있기 때문에
                //, 출력
                if (q.Count != 0)
                    Console.Write(", ");

            }
            Console.Write(">");
        }
    }
}
