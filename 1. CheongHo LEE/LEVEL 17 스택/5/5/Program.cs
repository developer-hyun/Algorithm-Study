using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
namespace _5
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int N = Convert.ToInt32(Console.ReadLine());

            Stack<int> stack = new Stack<int>();
            StringBuilder sb = new StringBuilder();

            //N = 8 이면 1부터 8을 차례로 넣을 정수 변수
            int pushCount = 1;

            //N = 8 이면 결과적으로 8개 Pop해야 하는데
            //N개만큼 잘 Pop했는지 확인하는 수
            int popCount = 0;

            //동작
            for (int i = 1; i <= N; i++)
            {
                int num = Convert.ToInt32(Console.ReadLine());
                
                while(num >= pushCount)
                {
                    sb.AppendLine("+");
                    stack.Push(pushCount);
                    pushCount++;
                }   
                //Pop하고 싶은 수가 가장 Top에 있어야만
                //Pop할 수 있다는 특징을 이용한 것
                if (num == stack.Peek())
                {
                    stack.Pop();
                    sb.AppendLine("-");
                    popCount++;
                }
            }

            //출력
            if (popCount == N)
                Console.WriteLine(sb);
            else
                Console.WriteLine("NO");
        }
    }
}
