using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Numerics;

namespace _5
{
    class Program
    {
        static void Main(string[] args)
        {
            int N = Convert.ToInt32(Console.ReadLine());

            long[,] arr = new long[10, 101];

            long sum = 0;

            for (int i = 0; i < 10; i++)
            {
                arr[i, 1] = 1;
            }                       

            for (int i = 2; i <= N; i++)
            {
                for (int j  = 0; j < 10; j++)
                {
                    if(j == 0)
                    {
                        arr[j, i] = arr[j+1, i-1];
                    }
                    else if (j == 9)
                    {
                        arr[j, i] = arr[j - 1, i - 1] ;
                    }
                    else
                    {
                        //미리 나눠주고 넣어야만 숫자가 초과가 안됨
                        arr[j, i] = (arr[j - 1, i - 1] + arr[j + 1, i - 1 ]) % 1000000000;
                    }
                }
            }

            for (int i = 1; i < 10; i++)
            {
                sum += arr[i, N];
            }

            Console.WriteLine(sum%1000000000);

            Console.ReadKey();
        }
    }
}
