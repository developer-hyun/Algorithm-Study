using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _2
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int M = Convert.ToInt32(Console.ReadLine());
            int N = Convert.ToInt32(Console.ReadLine());
            int number = 0;
            int sum = 0;
            int[] array = new int[1];
            array[0] = 0;
            for (int i = M; i <= N; i++)
            {
                if (i == 1)
                {
                    number++;
                }
                if (i == 2 || i == 3)
                {
                    sum += i;
                    if (array[0] == 0)
                    {
                        array[0] = i;
                    }
                }
                else
                {
                    double sqrt = Math.Truncate(Math.Sqrt(i)); //제곱근 이하의 수에서 나누어 떨어지지 않으면 소수이므로 제곱근의 버림값을 저장
                    for (double j = 2; j <= sqrt; j++)
                    {
                        if (i % j == 0)
                        {
                            break;
                        }
                        else
                        {
                            if (j == sqrt)
                            {
                                sum += i;

                                if (array[0] == 0)
                                {
                                    array[0] = i;
                                }
                            }
                        }

                    }

                }
            }
            if (sum == 0)
            {
                sum = -1;
                Console.WriteLine(sum);
            }
            else
            {

                Console.WriteLine(sum);
                Console.WriteLine(array[0]);
            }
        }
    }
}

