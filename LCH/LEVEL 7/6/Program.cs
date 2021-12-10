using System;
namespace _6
{
    class Program
    {
        static void Main(string[] args)
        {
            string input = Console.ReadLine();
            string[] splitWord = input.Split();
            int count = splitWord.Length;

            for (int i = 0; i < splitWord.Length; i++)
            {
                if (splitWord[i] == "")
                    count -= 1;
            }

            Console.WriteLine(count);
        }
    }
}
