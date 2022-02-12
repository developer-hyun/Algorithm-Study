using System;
using System.Collections.Generic;
namespace _4
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int T = Convert.ToInt32(Console.ReadLine());
            for (int i = 0; i < T; i++)
            {
                int[] NM = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
                int[] priority = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);

                //M
                int M = NM[1];
                //문서 중요도 저장용 큐
                Queue<int> priorityQ = new Queue<int>();
                //문서 순서 저장용 큐
                Queue<int> priorityIndex = new Queue<int>();

                for (int j = 0; j < priority.Length; j++)
                {
                    priorityQ.Enqueue(priority[j]);
                    priorityIndex.Enqueue(j);
                }

                Array.Sort(priority);
                Array.Reverse(priority);

                int count = 0;
                int index = -1;
                while(priorityQ.Count != 0)
                {
                    if(priorityQ.Peek() != priority[NM[0] - priorityQ.Count])
                    {

                        priorityQ.Enqueue(priorityQ.Dequeue());
                        priorityIndex.Enqueue(priorityIndex.Dequeue());
                    }
                    else
                    {
                        priorityQ.Dequeue();
                        index=priorityIndex.Dequeue();
                        count++;
                    }
                    if(index == NM[1])
                    {
                        Console.WriteLine(count);
                        break;
                    }
                }

            }
        }
    }
}
