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

            //오큰수를 바로 찾지 못한 값들을 넣기 위한 스택
            Stack<int> stack = new Stack<int>();
            //오큰수를 바로 찾지 못한 값들의 인덱스를 넣기 위한 스택
            Stack<int> stackIndex = new Stack<int>();
            //결과값 배열
            int[] outputArr = new int[N];

            for (int i = 0; i < N; i++)
            {
                //배열이 비어있지 않다는건 아직 오큰수를 못찾은 값이 있다는뜻
                //Peek보다 input이 크다는건 그 값은 Peek의 오큰수라는 뜻
                //
                while(stack.Count > 0 && (stack.Peek() < input[i]))
                {
                    outputArr[stackIndex.Peek()] = input[i];
                    stack.Pop();
                    stackIndex.Pop();
                }
                stack.Push(input[i]);
                stackIndex.Push(i);                
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
