using System;
using System.Collections.Generic;
namespace _2
{
    class Program
    {
        static void Main(string[] args)
        {
            int N = Convert.ToInt32(Console.ReadLine());

            Queue<int> q = new Queue<int>();

            //카드를 버릴건지 밑으로 옮길건지
            //확인하기 위한 bool
            bool cardOut = false;

            int card = 0;

            for (int i = 1; i <= N; i++)
            {
                q.Enqueue(i);
            }
            while(q.Count > 1)
            {
                if(!cardOut)
                {
                    q.Dequeue();
                    cardOut = true;
                }
                else
                {
                    card = q.Dequeue();
                    q.Enqueue(card);
                    cardOut = false;
                }
            }
            Console.WriteLine(q.Dequeue());
        }
    }
}
