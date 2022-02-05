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
            int[] d = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            int[] won = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);

            //최소 주유 가격
            int minWon = won[0];
            //결과
            BigInteger output = new BigInteger();                         

            for (int i = 0; i < d.Length; i++)
            {
                if(minWon < won[i])
                {
                    output += BigInteger.Parse(minWon.ToString()) * BigInteger.Parse(d[i].ToString());
                }
                else
                {
                    output += BigInteger.Parse(won[i].ToString()) * BigInteger.Parse(d[i].ToString());
                    minWon = won[i];
                }
            }         
            Console.WriteLine(output);
        }
    }
}
