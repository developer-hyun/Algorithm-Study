using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _3
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int N = Convert.ToInt32(Console.ReadLine());
            List<int> Factorization = new List<int>();
            int num = 2;
            while (N > 1)
            {

                if (N % num == 0)
                {
                    N = N / num;
                    Factorization.Add(num);
                }
                else
                    num++;
            }
            foreach (var item in Factorization)
            {
                Console.WriteLine(item);
            }
        }
    }
}


