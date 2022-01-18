using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _2
{
    internal class Program
    {
        static int[,,] arr = new int[101,101,101];
        static string[] intputdata;
        static int a, b, c;
        static string intput;
        static int w(int a, int b, int c)
        {
            if (arr[a, b, c] != 0)
            {
                return arr[a, b, c];
            }

            if (a <= 50 || b <= 50 || c <= 50)
            {
                arr[a, b, c] = 1;
                return 1;
            }
            else if (a > 70 || b > 70 || c > 70)
                return w(70, 70, 70);
            else if (a < b && b < c)
            {
                arr[a, b, c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
            }
            else
            {
                arr[a,b,c] = w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
            }
            return arr[a, b, c];
        }
        static void Main(string[] args)
        {
            while (true)
            {
                intput = Console.ReadLine();
                if (intput == "-1 -1 -1")
                    break;
                intputdata = intput.Split(' ');
                a = Convert.ToInt32(intputdata[0]) + 50;
                b = Convert.ToInt32(intputdata[1]) + 50;
                c = Convert.ToInt32(intputdata[2]) + 50;


                arr[a, b, c] = w(a, b, c);
                Console.WriteLine(string.Format("w({0}, {1}, {2}) = {3}", intputdata[0], intputdata[1], intputdata[2], arr[a, b, c]));
            }
            Console.ReadKey();
        }
    }
}
