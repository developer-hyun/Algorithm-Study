using System;

namespace _9
{
    class Program
    {
        static void Main(string[] args)
        {
            while(true)
            {
                
                string input = Console.ReadLine();
                string[] inputdata = input.Split(' ');
                int x, y, z;
                x = Convert.ToInt32(inputdata[0].ToString());
                y = Convert.ToInt32(inputdata[1].ToString());
                z = Convert.ToInt32(inputdata[2].ToString());

                if(x == 0 && y == 0 && z == 0)
                        break;

                

                if (x * x + z * z == y * y)
                    Console.WriteLine("right");
                else if (x * x + y * y == z * z)
                    Console.WriteLine("right");
                else if (z * z + y * y == x * x)
                    Console.WriteLine("right");
                else
                    Console.WriteLine("wrong");
            }
            Console.ReadKey();
        }
    }
}
