using System;

namespace _7
{
    class Program
    {
        static void Main(string[] args)
        {
            int input = Convert.ToInt32(Console.ReadLine());
            int inputSave = input;
            int divisionFive = input / 5;
            int min = 10000;

            if (input % 3 == 0 && min > input / 3)
                min = input / 3;
                
            for (int i = 1; i < divisionFive + 1; i++)
            {
                input = inputSave;
                input -= 5 * i;
                if(input % 3 == 0)
                {
                    int divisionThree = input / 3;
                    if(min > i + divisionThree)
                        min = i + divisionThree;
                }
                else if(input == 0)
                {
                    if (min > i)
                        min = i;
                }
            }

            if (min == 10000)
                min = -1;

            Console.WriteLine(min);
        }

       
    }
}
