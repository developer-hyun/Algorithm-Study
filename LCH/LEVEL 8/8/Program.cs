using System;
using System.Numerics;

namespace _8
{
    class Program
    {
        static void Main(string[] args)
        {
            string input = Console.ReadLine();
            string[] inputData = input.Split(' '); 
            BigInteger idx1 = BigInteger.Parse(inputData[0]);
            BigInteger idx2 = BigInteger.Parse(inputData[1]);
            Console.WriteLine(idx1 + idx2);
        }
    }
}
