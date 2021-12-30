using System;

namespace _8
{
    class Program
    {
        static void Main(string[] args)
        {
            string input1 = Console.ReadLine();
            string[] input1data = input1.Split(' ');
            string input2 = Console.ReadLine();
            string[] input2data = input2.Split(' ');
            string input3 = Console.ReadLine();
            string[] input3data = input3.Split(' ');
            int x1, x2, x3;
            int y1, y2, y3;

            x1 = Convert.ToInt32(input1data[0].ToString());
            x2 = Convert.ToInt32(input2data[0].ToString());
            x3 = Convert.ToInt32(input3data[0].ToString());

            y1 = Convert.ToInt32(input1data[1].ToString());
            y2 = Convert.ToInt32(input2data[1].ToString());
            y3 = Convert.ToInt32(input3data[1].ToString());

            int x, y;
            if (x1 == x2)
            {
                x = x3;
            }
            else if (x2 == x3)
                x = x1;
            else
                x = x2;

            if (y1 == y2)
            {
                y = y3;
            }
            else if (y2 == y3)
                y = y1;
            else
                y = y2;

            Console.Write(x);
            Console.Write(' ');
            Console.WriteLine(y);

        }
    }
}
