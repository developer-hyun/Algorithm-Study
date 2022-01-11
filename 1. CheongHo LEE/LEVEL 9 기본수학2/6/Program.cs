using System;
using System.Text;
using System.Collections.Generic;
namespace _6
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int T = Convert.ToInt32(Console.ReadLine());
            for (int K = 0; K < T; K++)
            {
                int input = Convert.ToInt32(Console.ReadLine());
                int first = 0;
                int second = 0;
                int firstSave = 0;
                int secondSave = 0;
                int difference = 10000;
                List<int> deArray = decimalArray(input);
                for (int i = 0; i < deArray.Count; i++)
                {
                    first = deArray[i];
                    Console.WriteLine("first : " + first);
                    if (deArray.Contains(input - deArray[i]) && input - deArray[i] >= first)
                    {
                        second = input - deArray[i];
                        Console.WriteLine("second : " + second);
                        Console.WriteLine("(second - first) : " + (second - first));
                        Console.WriteLine("difference : " + difference);
                        if (difference > (second - first))
                        {
                            difference = second - first;
                            firstSave = first;
                            secondSave = second;
                        }
                    }
                }
                Console.WriteLine(firstSave + " " + secondSave);
            }
            Console.ReadKey();
        }
        public static List<int> decimalArray(int input)
        {
            List<int> result = new List<int>();
            for (int i = 1; i <= input; i++)
            {

                if (i == 1)
                    continue;
                if (i == 2 | i == 3)
                    result.Add(i);

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
                            result.Add(i);
                        }
                    }
                }
            }

            return result;
        }

    }
}


