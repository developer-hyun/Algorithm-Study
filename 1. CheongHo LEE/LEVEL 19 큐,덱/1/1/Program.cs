using System;
using System.Collections;
using System.Text;
using System.Linq;
namespace _1
{
    class Program
    {
        static void Main(string[] args)
        {
            Queue queue = new Queue();

            int N = Convert.ToInt32(Console.ReadLine());
            int last = 0;
            StringBuilder sb = new StringBuilder();
            for (int i = 0; i < N; i++)
            {
                string[] input = Console.ReadLine().Split(' ');
                if (input.Length > 1)
                    last = Convert.ToInt32(input[1]);
                switch (input[0])
                {
                    //push
                    case "push":
                        queue.Enqueue(input[1]);
                        break;
                    //pop
                    case "pop":
                        {
                            sb.AppendLine(queue.Count != 0 ? queue.Dequeue().ToString() : "-1");
                            break;
                        }
                    //size
                    case "size":
                        sb.AppendLine(queue.Count.ToString());
                        break;
                    //empty
                    case "empty":
                        {
                            sb.AppendLine(queue.Count == 0 ? "1" : "0");
                            break;
                        }
                    //top
                    case "front":
                        {
                            sb.AppendLine(queue.Count != 0 ? queue.Peek().ToString() : "-1");
                            break;
                        }
                    case "back":
                        {
                            sb.AppendLine(queue.Count != 0 ? last.ToString() : "-1");
                            break;
                        }
                }
            }

            Console.WriteLine(sb);
        }
    }
}
