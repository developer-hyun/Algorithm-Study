using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int N = Convert.ToInt32(Console.ReadLine());
            string input = Console.ReadLine();
            string[] inputdata = input.Split(' ');
            int number = 0;
            for (int i = 0; i < inputdata.Length; i++)
            {
                if (Convert.ToInt32(inputdata[i]) == 1)
                {
                    number++;
                }
                else 
                {
                    double sqrt = Math.Truncate(Math.Sqrt(Convert.ToInt32(inputdata[i]))); //제곱근 이하의 수에서 나누어 떨어지지 않으면 소수이므로 제곱근의 버림값을 저장
                    for (double j = 2; j <= sqrt; j++)
                    {
                        if (Convert.ToInt32(inputdata[i]) % j == 0)
                        {
                            Console.WriteLine("소수아님 : " + Convert.ToInt32(inputdata[i]));
                            number++;
                            break;
                        }


                    }

                }
            }
            Console.WriteLine(inputdata.Length);
            Console.WriteLine(number);
            Console.WriteLine("소수 갯수 : " + (inputdata.Length - number));
            Console.ReadKey();
        }
    }
}
