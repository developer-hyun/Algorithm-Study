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
            int N = Convert.ToInt32(Console.ReadLine());
            int count = 0;
            int defaultValue = 666;       
            
            while (N > count)
            {
                if(defaultValue.ToString().Contains("666"))
                {
                    count += 1;
                }
                defaultValue += 1;
            }
            

            Console.WriteLine(defaultValue-1);

            Console.ReadKey();
        }
    }
}
