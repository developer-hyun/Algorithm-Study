using System;
using System.Text;
using System.Collections.Generic;

namespace _6
{
    internal class Program
    {
        static void Main(string[] args)
        {

            int N = Convert.ToInt32(Console.ReadLine());
            int[] input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);

            StringBuilder sb = new StringBuilder();
            Stack<int> stack = new Stack<int>();
            Stack<int> stackIndex = new Stack<int>();
            int[] outputArr = new int[N];

            for (int i = 0; i < N; i++)
            {
                int idx = i;
                while(stack.Count > 0 && (stack.Peek() < input[idx]))
                {
                    outputArr[stackIndex.Peek()] = input[idx];
                    stack.Pop();
                    stackIndex.Pop();
                }
                stack.Push(input[idx]);
                stackIndex.Push(idx);
                
            }
            while(stackIndex.Count > 0)
            {
                outputArr[stackIndex.Peek()] = -1;
                stackIndex.Pop();
            }

            outputArr[N-1] = -1;
            foreach (var item in outputArr)
            {
                sb.Append(item + " ");
            }
            Console.WriteLine(sb);
        }      
    }
}
