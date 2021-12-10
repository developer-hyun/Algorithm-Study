using System;
using System.Collections.Generic;
namespace _10
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = Convert.ToInt32(Console.ReadLine());
            int count = 0;
            for (int k = 0; k < n; k++)
            {
                string input = Console.ReadLine();
                List<string> array = new();
                if (input.Length == 1)
                    array.Add(input[0].ToString());
                else if (input.Length >= 2)
                {
                    array.Add(input[0].ToString());
                    array.Add(input[1].ToString());
                }
                for (int i = 2; i < input.Length; i++)
                {
                    if (input[i - 1].ToString() == input[i].ToString())
                    {
                        array.Add(input[i].ToString());
                    }
                    if (input[i - 1].ToString() != input[i].ToString())
                    {
                        if (array.Contains(input[i].ToString()))
                        {
                            break;
                        }
                        else
                        {
                            array.Add(input[i].ToString());
                        }
                    }

                }
                string text = string.Join("", array.ToArray());
                if (text == input)
                    count += 1;
            }
            Console.WriteLine(count);
        }
    }
}
