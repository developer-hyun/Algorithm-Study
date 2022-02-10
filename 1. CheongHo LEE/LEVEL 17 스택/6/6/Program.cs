using System;
using System.Text;
using System.Collections.Generic;
namespace _6
{
    internal class Program
    {
        static int N = Convert.ToInt32(Console.ReadLine());
        static int[] input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);

        static StringBuilder sb = new StringBuilder();
        static Stack<int> stack = new Stack<int>();
        static void Main(string[] args)
        {

            for (int i = 0; i < N; i++)
            {
                stack.Push(input[i]);
            }
        }

        static public void NGE()
        {

        }
    }
}
