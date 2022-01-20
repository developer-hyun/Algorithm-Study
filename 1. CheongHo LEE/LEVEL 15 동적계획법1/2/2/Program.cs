using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _2
{
    internal class Program
    {
        static int[,,] arr = new int[101, 101, 101];
        static string[] inputdata;
        static int a, b, c;
        static string input;
        static int w(int a, int b, int c)
        {
            // Console.WriteLine(string.Format("{0}, {1}. {2}", a, b, c));
            if (arr[a, b, c] != 0)
            {
                return arr[a, b, c];
            }

            if (a <= 50 || b <= 50 || c <= 50)
            {
                return arr[a, b, c] = 1;
            }
            else if (a > 70 || b > 70 || c > 70)
                w(70, 70, 70);
            else if (a < b && b < c)
            {
                arr[a, b, c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
            }
            else
            {
                arr[a, b, c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
            }
            return arr[a, b, c];
        }
        static void Main(string[] args)
        {
            while (true)
            {
                input = Console.ReadLine();
                inputdata = input.Split(' ');
                if (inputdata[0] == "-1" && inputdata[1] == "-1" && inputdata[2] == "-1")
                    break;

                a = Convert.ToInt32(inputdata[0]) + 50;
                b = Convert.ToInt32(inputdata[1]) + 50;
                c = Convert.ToInt32(inputdata[2]) + 50;


                if (a > 70 || b > 70 || c > 70)
                {
                    //Console.WriteLine(string.Format("70보다 크네 {0}, {1}. {2}", a, b, c));
                    arr[70, 70, 70] = w(70, 70, 70);
                    Console.WriteLine(string.Format("w({0}, {1}, {2}) = {3}", inputdata[0], inputdata[1], inputdata[2], arr[70, 70, 70]));
                    //Console.WriteLine("1");
                }
                else
                {
                    arr[a, b, c] = w(a, b, c);
                    Console.WriteLine(string.Format("w({0}, {1}, {2}) = {3}", inputdata[0], inputdata[1], inputdata[2], arr[a, b, c]));
                    //Console.WriteLine("2");
                }

            }
        }
    }
}
