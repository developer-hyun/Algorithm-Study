using System;
using System.Linq;
using System.Numerics;
using System.Text;

namespace _5
{
    class Program
    {
        static void Main(string[] args)
        {
            int N = Convert.ToInt32(Console.ReadLine());
            long[] d = Array.ConvertAll(Console.ReadLine().Split(' '), long.Parse);
            long[] won = Array.ConvertAll(Console.ReadLine().Split(' '), long.Parse);

            //최소 주유 가격
            long minWon = won[0];
            //결과
            long output = 0;                     

            for (int i = 0; i < d.Length; i++)
            {
                if(minWon < won[i])
                {
                    output += minWon * d[i];
                }
                else
                {
                    output +=won[i] * d[i];
                    minWon = won[i];
                }
            }         
            Console.WriteLine(output);
        }
    }
}
