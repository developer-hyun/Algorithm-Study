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
            StringBuilder sb = new StringBuilder();

            string input = Console.ReadLine();
            string[] inputdata = input.Split(' ');
            int M = Convert.ToInt32(inputdata[0]);
            int N = Convert.ToInt32(inputdata[1]);
            List<int> desimalList = new List<int>();
            for (int i = M; i <= N; i++)
            {
                if (i == 1)
                    continue;
                if (i == 2 | i == 3)
                    sb.AppendFormat("{0}\n", i);
                if (i % 2 == 0)
                    continue;
                double sqrt = Math.Truncate(Math.Sqrt(i));
                //제곱근 이하의 수에서 나누어 떨어지지 않으면 소수이므로 제곱근의 버림값을 저장
                for (int j = 2; j <= sqrt; j++)
                {
                    if (i % j == 0)
                    {
                        break;
                    }
                    else
                    {
                        if (j == sqrt)
                        {
                            sb.AppendFormat("{0}\n", i);
                        }
                    }
                }
            }
            
             Console.WriteLine(sb);
            
            Console.ReadKey();
        }
    }
}


