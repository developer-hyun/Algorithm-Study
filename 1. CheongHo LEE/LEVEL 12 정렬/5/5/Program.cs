using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _5
{
    class Program
    {
        static void Main(string[] args)
        {
            string input = Console.ReadLine();
            int[] array = new int[input.Length];

            for (int i = 0; i < input.Length; i++)
            {
                array[i] = Convert.ToInt32(input[i].ToString());
            }
            Array.Sort(array);
            Array.Reverse(array);
            foreach (var item in array)
            {
                Console.Write(item);
            }

            Console.ReadKey();
        }
    }
}
