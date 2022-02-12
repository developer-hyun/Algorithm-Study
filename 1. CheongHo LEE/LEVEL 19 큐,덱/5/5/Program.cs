using System;
using System.Collections.Generic;
using System.Text;
using System.Linq;
namespace _5
{
    class Program
    {
        static void Main(string[] args)
        {
            List<string> list = new List<string>();

            int N = Convert.ToInt32(Console.ReadLine());
            int last = 0;
            StringBuilder sb = new StringBuilder();
            for (int i = 0; i < N; i++)
            {
                string[] input = Console.ReadLine().Split(' ');
                switch (input[0])
                {                    
                    //push
                    case "push_front":
                        list.Insert(0, input[1]);
                        break;
                    //push
                    case "push_back":
                        {
                            list.Add(input[1]);
                            break;
                        }
                    //pop
                    case "pop_front":
                        if (list.Count != 0)
                        {
                            sb.AppendLine(list[0]);
                            list.RemoveAt(0);
                        }
                        else
                            sb.AppendLine("-1");
                        break;
                    //pop
                    case "pop_back":
                        {
                            if (list.Count != 0)
                            {
                                sb.AppendLine(list[^1]);
                                list.RemoveAt(list.Count-1);
                            }
                            else
                                sb.AppendLine("-1");
                            break;
                        }

                    //size
                    case "size":
                        sb.AppendLine(list.Count.ToString());
                        break;
                    //empty
                    case "empty":
                        {
                            sb.AppendLine(list.Count == 0 ? "1" : "0");
                            break;
                        }
                    
                    case "front":
                        {
                            sb.AppendLine(list.Count != 0 ? list[0] : "-1");
                            break;
                        }
                    case "back":
                        {
                            sb.AppendLine(list.Count != 0 ? list[^1] : "-1");
                            break;
                        }
                }
            }

            Console.WriteLine(sb);
        }
    }
}
