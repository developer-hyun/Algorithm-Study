using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _4
{
    class Program
    {
        static void Main(string[] args)
        {
            int T = Convert.ToInt32(Console.ReadLine());

            double[] P = new double[101];
            P[1] = 1;
            P[2] = 1;
            P[3] = 1;
            P[4] = 2;
            P[5] = 2;
            for (int i = 0; i < T; i++)
            {
                int N = Convert.ToInt32(Console.ReadLine());
                for (int j = 6; j <= N; j++)
                {
                    P[j] = P[j - 1] + P[j - 5];
                }
                Console.WriteLine(P[N]);
            }
            Console.ReadKey();
        }
    }
}
