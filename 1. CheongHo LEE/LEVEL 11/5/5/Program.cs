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
                if (defaultValue.ToString().Contains("666"))
                {
                    count += 1;
                }
                defaultValue += 1;
            }


            Console.WriteLine(defaultValue - 1);

            Console.ReadKey();
            
        }
    }

    //if(N == 1)
    //    Console.WriteLine(defaultValue);

    //while (N > check)
    //{
    //    check += 19;
    //    checkCount += 1;
    //}

    //defaultValue = defaultValue + 10000 * (checkCount - 1);
    //N = N - 19 * (checkCount - 1);


    //while (N > count)
    //{
    //    if (count < 6)
    //    {
    //        defaultValue += 1000;
    //        count += 1;
    //        continue;
    //    }
    //    else if (count == 6)
    //    {
    //        defaultValue += 994;
    //        count += 1;
    //        continue;
    //    }
    //    else if (count > 6 && count < 16)
    //    {
    //        defaultValue += 1;
    //        count += 1;
    //        continue;
    //    }
    //    else if (count == 16)
    //    {
    //        defaultValue += 997;
    //        count += 1;
    //        continue;
    //    }
    //    else if (count > 16 && count < 19)
    //    {
    //        defaultValue += 1000;
    //        count += 1;
    //        continue;
    //    }

    //}


    //Console.WriteLine(defaultValue);

        
}
