using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _3
{
    class Program
    {
        static void Main(string[] args)
        {
            int N = Convert.ToInt32(Console.ReadLine());
            int[] tileCount = new int[1000001];
            tileCount[1] = 1;
            tileCount[2] = 2;

            for (int i = 3; i <= N; i++)
            {
                tileCount[i] = (tileCount[i - 1] + tileCount[i - 2])%15746;
            }

            Console.WriteLine(tileCount[N]);

        }
    }
}
