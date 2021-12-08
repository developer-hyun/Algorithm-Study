using System;
using System.Collections.Generic;

namespace _2
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = Convert.ToInt32(Console.ReadLine());
            string input = Console.ReadLine();
            int sum = RandAdd(n, input);
            Console.WriteLine(sum);
        }


        static public int RandAdd(int n, string input)
        {
            int sum = 0;            
            for (int i = 0; i < input.Length; i++)
            {
                sum += Convert.ToInt32(input[i].ToString());
            }
            return sum;
        }
    }
}
