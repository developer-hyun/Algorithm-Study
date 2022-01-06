using System;

namespace _3
{
    class Program
    {
        static void Main(string[] args)
        {
            char alpha = 'a';
            string input = Console.ReadLine();
            int ascii;
            string[] array = new string[26];
            ascii = Convert.ToInt32(alpha);

            for (int i = 0; i < 26; i++)
            {
                for (int j = 0; j < input.Length; j++)
                {
                    if (ascii == input[j] && array[i] == null)
                    {
                        array[i] = Convert.ToString(j);
                    }
                }
                if (array[i] == null)
                    array[i] = Convert.ToString(-1);
                ascii++;
            }

            for (int i = 0; i < array.Length; i++)
            {
                Console.Write(array[i]);
                Console.Write(" ");
            }
        }
    }
}
