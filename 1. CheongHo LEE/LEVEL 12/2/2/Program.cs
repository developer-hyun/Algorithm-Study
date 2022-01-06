using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _2
{
    class Program
    {
        static void Main(string[] args)
        {
            StringBuilder sb = new StringBuilder();
            int N = Convert.ToInt32(Console.ReadLine());
            int[] array = new int[N];

            for (int i = 0; i < N; i++)
            {
                array[i] = Convert.ToInt32(Console.ReadLine());
            }
            Array.Sort(array);
            for (int i = 0; i < array.Length; i++)
            {
                sb.AppendLine(array[i].ToString());
            }
            Console.WriteLine(sb);
            Console.ReadKey();
        }
    }
}
