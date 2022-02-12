using System;
using System.Collections;
using System.Text;
namespace _1
{
    class Program
    {
        static void Main(string[] args)
        {
            Stack stack = new Stack();
            int N = Convert.ToInt32(Console.ReadLine());

            StringBuilder sb = new StringBuilder();
            for (int i = 0; i < N; i++)
            {
                string[] input = Console.ReadLine().Split(' ');
                switch(input[0])
                {
                    //push
                    case "push":
                        stack.Push(input[1]);
                        break;
                    //pop
                    case "pop":
                        {
                            sb.AppendLine(stack.Count != 0 ? stack.Pop().ToString() : "-1");
                            break;
                        }
                    //size
                    case "size":
                        sb.AppendLine(stack.Count.ToString());
                        break;
                    //empty
                    case "empty":
                        {
                            sb.AppendLine(stack.Count == 0 ? "1" : "0");
                            break;
                        }
                    //top
                    case "top":
                        {
                            sb.AppendLine(stack.Count != 0 ? stack.Peek().ToString() : "-1");
                            break;
                        }
                }     
            }

            Console.WriteLine(sb);
        }
    }
}
