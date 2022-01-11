using System;
using System.IO;

namespace PracticeAlgo
{
    class Program
    {
        static void Main(string[] args)
        {
            StreamReader reader = new StreamReader(Console.OpenStandardInput());
            StreamWriter print = new StreamWriter(Console.OpenStandardOutput());

            int count = Convert.ToInt32(reader.ReadLine());
            int[] list = new int[10001];
            for (int i = 0; i < count; i++)
            {
                list[int.Parse(reader.ReadLine())]++;
            }
            for (int i = 0; i <= 10000; i++)
            {
                if (list[i] != 0)
                {
                    for (int j = 0; j < list[i]; j++)
                    {
                        print.WriteLine(i);
                    }
                }
            }
        }
    }
}