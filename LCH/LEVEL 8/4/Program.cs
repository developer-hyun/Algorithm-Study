using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _4
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string input = Console.ReadLine();
            string[] inputArray = input.Split(' '); 

            double A = Convert.ToInt32(inputArray[0].ToString());
            double B = Convert.ToInt32(inputArray[1].ToString());
            double V = Convert.ToInt32(inputArray[2].ToString());

            // 5,1 6 일때 6-5인 1이라는 층이 있고 나는 한번에 5-1, 즉 4만큼 올라갈 수 있다. 즉 한번의 시도로 여유롭게 올라갔다는 의미.
            double n = Math.Ceiling((V - A) / (A - B));
            Console.WriteLine(n + 1 );
            Console.ReadKey();
        }
    }
}
