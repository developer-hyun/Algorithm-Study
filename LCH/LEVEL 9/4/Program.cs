using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _4
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string input = Console.ReadLine();
            string[] inputdata = input.Split(' ');
            int M = Convert.ToInt32(inputdata[0]);
            int N = Convert.ToInt32(inputdata[1]);
            List<int> DecimalList = new List<int>();
            bool[] check = new bool[N+1];
            for (int i = M; i <= N; i++)
            {
                if (i == 1)
                    continue;

                DecimalList.Add(i);
            }
            for (int i = 0; i < N+1; i++)
                check[i] = false;
            for (int n  = 2; n <= N; n++)
            {
                for (int i = 0; (n * n) + (i * n) <= N; i++)
                {
                    DecimalList.Remove((n * n) + (i * n));
                }

            }
            foreach (var item in DecimalList)
            {
                Console.WriteLine(item);
            }
            Console.ReadLine();
        }
    }
}


