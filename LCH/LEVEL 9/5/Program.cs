using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _5
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //1 3 5 7 전체길이 = 4, number = 1, 출력 = 3
           
            while(true)
            {
                
                int N = Convert.ToInt32(Console.ReadLine());
                if (N == 0)
                    break;
                int number = 0; //소수가 아닌값들을 찾아서 전체 길이에서 빼기

                for (int i = N+1; i <= N * 2; i++)
                {
                    Console.WriteLine("i : " + i);
                    if (i == 1)
                    {
                        continue;
                    }
                    if (i == 2 || i == 3)
                    {
                        number += 1;
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
                                    Console.WriteLine("이건 소수야 : " + i);
                                    number += 1;
                                }
                            }

                        }

                    }
                    
                }
                Console.WriteLine(number);
            }

            Console.ReadKey(); 
        }
    }
}
