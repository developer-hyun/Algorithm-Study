using System;

namespace _9
{
    class Program
    {
        static void Main(string[] args)
        {
            int T = Convert.ToInt32(Console.ReadLine());
            for (int i = 0; i < T; i++)
            {
                string input = Console.ReadLine();
                string[] inputData = input.Split(' ');
                long x = Convert.ToInt32(inputData[0].ToString());
                long y = Convert.ToInt32(inputData[1].ToString());

                long an = 2; //a1
                long k = 2; //계차수열
                long d = y - x; //거리
                long count = 1; 
                long output = 0;

                while (d > an)
                {
                    an += 2 * k;
                    k += 1;
                    count += 1; 
                }

                if (an - count < d) 
                    output = count * 2;
                else
                    output = (count * 2) - 1;

                Console.WriteLine(output);
            }
        }
    }
}
