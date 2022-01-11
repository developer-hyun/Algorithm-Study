using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _3
{
    class Program
    {
        static void Main(string[] args)
        {
            int N = Convert.ToInt32(Console.ReadLine());
            int[] h = new int[N];
            int[] w = new int[N];
            StringBuilder sb = new StringBuilder();
            for (int i = 0; i < N; i++)
            {
                string input = Console.ReadLine();
                string[] inputdata = input.Split(' ');
                w[i] = Convert.ToInt32(inputdata[0]);
                h[i] = Convert.ToInt32(inputdata[1]);
            } //몸무게, 키 배열정렬

            for (int i = 0; i < N; i++)
            {
                int count = 0;
                for (int j = 0; j < N; j++)
                {
                    if(h[i] < h[j] && w[i] < w[j])
                    {
                        count += 1;
                    }
                }
                sb.AppendFormat("{0} ", count+1);
            }
            Console.WriteLine(sb);
            Console.ReadKey();
        }
    }
}
