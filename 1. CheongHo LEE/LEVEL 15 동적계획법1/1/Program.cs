using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _1
{    class Test
    {
        public static void Main()
        {
            int num = Convert.ToInt32(Console.ReadLine());

            int[] fibonacci = new int[41];
            fibonacci[0] = 0;
            fibonacci[1] = 1;

            //모든 피보나치 수열 값 미리 구하기
            for (int i = 2; i < 41; i++)
            {
                fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
            }

            for (int i = 0; i < num; i++)
            {
                int N = Convert.ToInt32(Console.ReadLine());
                if (N == 0) 
                    Console.WriteLine("1 0");
                else 
                    Console.WriteLine($"{fibonacci[N - 1]} {fibonacci[N]}");
            }

            Console.ReadKey();
        }
    }
}
