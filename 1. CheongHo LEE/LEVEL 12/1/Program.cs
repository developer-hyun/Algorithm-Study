using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _1
{
    class Program
    {
        static void Main(string[] args)
        {
            int N = Convert.ToInt32(Console.ReadLine());
            StringBuilder sb = new StringBuilder();
            int[] arrays = new int[N];

            for (int i = 0; i < N; i++)
            {
                arrays[i] = Convert.ToInt32(Console.ReadLine());
            }

            var output = from array in arrays
                         orderby Convert.ToInt32(array)
                         select array;

            foreach (var item in output)
            {
                sb.AppendLine(item.ToString());
            }

            Console.WriteLine(sb);

            Console.ReadKey();
            //for (int i = 0; i < N; i++)
            //{
            //    array[i] = Convert.ToInt32(Console.ReadLine());
            //}
            //Array.Sort(array);

            //foreach (var item in array)
            //{
            //    Console.WriteLine(item);
            //}
        }
    }
}
