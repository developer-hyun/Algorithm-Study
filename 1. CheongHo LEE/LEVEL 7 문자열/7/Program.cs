using System;

namespace _7
{
    class Program
    {
        static void Main(string[] args)
        {
            string input = Console.ReadLine();

            string[] array = input.Split(" ");

            char[] a = array[0].ToCharArray();
            char[] b = array[1].ToCharArray();

            Array.Reverse(a);
            Array.Reverse(b);

            string test;
            string test2;

            test = String.Concat(a);
            test2 = String.Concat(b);

            int first = Convert.ToInt32(test);
            int second = Convert.ToInt32(test2);

            if (first > second)
                Console.WriteLine(first);
            else
                Console.WriteLine(second);
        }
    }
}
