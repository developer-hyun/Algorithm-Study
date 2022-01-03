using System;

namespace _5
{
    internal class Program
    {
        static void Main(string[] args)
        {
            while(true)
            {
                int input = Convert.ToInt32(Console.ReadLine());
                if (input == 0)
                    break;
                int num = 0;

                for (int i = input+1; i <= input * 2; i++)
                {

                    if (i == 1)
                        continue;
                    if (i == 2 | i == 3)
                        num += 1;
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
                                num += 1;
                            }
                        }
                    }

                }
                Console.WriteLine(num);
            }
            Console.ReadKey();
        }
    }
}


