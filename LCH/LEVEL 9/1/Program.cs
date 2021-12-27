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
            int count = 0; //소수이면 count += 1
            int number = 2;
            for (int i = 0; i < inputdata.Length; i++)
            {
                if (Convert.ToInt32(inputdata[i]) == 1 || Convert.ToInt32(inputdata[i]) == 2 || Convert.ToInt32(inputdata[i]) == 3)
                {
                    count++;
                }
                else
                {
                    double sqrt = Math.Truncate(Math.Sqrt(Convert.ToInt32(inputdata[i]))); //제곱근 이하의 수에서 나누어 떨어지지 않으면 소수이므로 제곱근의 버림값을 저장


                }
            }
        }
    }
}
