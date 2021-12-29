using System;

namespace _10
{
    class Program
    {
        static void Main(string[] args)
        {
            int r = Convert.ToInt32(Console.ReadLine());
            double uS = Math.PI * r * r;
            double tS = 2 * r * r;

            /* 21 >> 1,385.442360 콤마가 찍힘
            Console.WriteLine("{0:N6}",uS);
            Console.WriteLine("{0:N6}", tS);
            */

            Console.WriteLine("{0:.000000}", uS);
            Console.WriteLine("{0:.000000}", tS);
        }
    }
}
