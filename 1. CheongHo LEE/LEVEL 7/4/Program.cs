using System;
using System.Collections.Generic;
namespace _4
{
    class Program
    {
        static void Main(string[] args)
        {
            int T = Convert.ToInt32(Console.ReadLine());

            for (int l = 0; l < T; l++)
            {
                string input = Console.ReadLine();
                string[] tmp = new string[2];
                tmp = input.Split(" ");
                int R = Convert.ToInt32(tmp[0]);
                string S = tmp[1];

                List<string> array = new();

                
                for (int i = 0; i < S.Length; i++)
                {
                    for (int j = 0; j < R; j++)
                    {
                        array.Add(Convert.ToString(S[i]));
                    }
                }
                foreach (var item in array)
                {
                    Console.Write(item);
                }
                Console.WriteLine();
            }
        }

    }
}
