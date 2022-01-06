using System;
using System.Collections.Generic;
using System.Linq;

namespace _5
{
    class Program
    {
        static void Main(string[] args)
        {
            string input = Console.ReadLine();
            string upper = input.ToUpper();
            List<string> inputList = new();
            List<char> checkWord = upper.Distinct().ToList();
            int number = 0;
            char output = ' ';
            bool equalCheck = false;
            int count;
            if (input.Length > 1) 
            {
                for (int i = 0; i < checkWord.Count; i++)
                {
                    count = 0;
                    for (int j = 0; j < upper.Length; j++)
                    {
                        if (checkWord[i] == upper[j])
                        {
                            count++;
                        }

                    }
                    if (number < count)
                    {
                        number = count;
                        output = checkWord[i];
                        equalCheck = false;
                    }
                    else if (number == count)
                        equalCheck = true;
                    else if (number > count)
                        continue;
                }
            }
            else
                output = Convert.ToChar(upper);

            if (equalCheck == true)
                Console.WriteLine("?");
            else if(equalCheck == false)
                Console.WriteLine(output);
        }
    }
}

