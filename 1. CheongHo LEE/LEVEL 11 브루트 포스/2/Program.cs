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
            string N = Console.ReadLine();
            int num = 1;

            int constructor = 0;
            while(Convert.ToInt32(N) > num)
            {
                constructor = num;
                for (int i = 0; i < num.ToString().Length; i++)
                {
                    constructor += Convert.ToInt32(num.ToString()[i].ToString());
                }
                if(Convert.ToInt32(N) == constructor)
                {
                    break;
                }
                num += 1;
            }
            if (Convert.ToInt32(N) == num)
                num = 0;
            
            Console.WriteLine(num);
            Console.ReadKey();
        }
    }
}
