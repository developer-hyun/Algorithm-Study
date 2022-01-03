using System;
using System.Collections.Generic;
namespace _2
{
    class Program
    {
        static void Main(string[] args)
        {
            int input = Convert.ToInt32(Console.ReadLine());
            int n = 1;
            int k = n - 1;
            int output = 1;
                
            while (input > output)
            {
                output +=  6 * (n-1); 
                n++;
            }

            if (input == 1)
                Console.WriteLine(n);
            else
                Console.WriteLine(n-1);
        }
    }
}
