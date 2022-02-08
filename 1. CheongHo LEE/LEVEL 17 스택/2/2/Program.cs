using System;
using System.Collections;
namespace _2
{
    class Program
    {
        static void Main(string[] args)
        {
            int N = Convert.ToInt32(Console.ReadLine());
            int output = 0;
            Stack stack = new Stack();
            for (int i = 0; i < N; i++)
            {
                int num = Convert.ToInt32(Console.ReadLine());
                if (num == 0)
                {
                    stack.Pop();
                }
                else
                    stack.Push(num);                
            }
            //pop할때 stack.count가 실시간으로 줄어들어서
            //정상적인 횟수만큼 돌지 않는다.
            //그래서 따로 변수로 만들어줘야한다.
            int max = stack.Count;
            for (int i = 0; i < max; i++)
            {
                output += Convert.ToInt32(stack.Pop());
            }

            Console.WriteLine(output);
        }
    }
}
