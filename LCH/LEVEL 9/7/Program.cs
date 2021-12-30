using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _7
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string input = Console.ReadLine();
            string[] inputdata = input.Split(' ');
            int x = Convert.ToInt32(inputdata[0]);
            int y = Convert.ToInt32(inputdata[1]);
            int w = Convert.ToInt32(inputdata[2]);
            int h = Convert.ToInt32(inputdata[3]);

            int min = 0;

            int xd;
            int yd;

            xd = Math.Abs(x - 0);
            yd = Math.Abs(y - 0);

            if ((w - x) < xd)
                xd = w - x;
            if ((h - y) < yd)
                yd = h - y;

            if (xd > yd)
                min = yd;
            else
                min = xd;

            Console.WriteLine(min);
            Console.ReadKey();
        }
    }
}
