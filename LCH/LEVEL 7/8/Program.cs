using System;

namespace _8
{
    class Program
    {
        static void Main(string[] args)
        {
            string input = Console.ReadLine();

            string ABC = "ABC";
            string DEF = "DEF";
            string GHI = "GHI";
            string JKL = "JKL";
            string MNO = "MNO";
            string PQRS = "PQRS";
            string TUV = "TUV";
            string WXYZ = "WXYZ";

            int num = 0;
            for (int i = 0; i < input.Length; i++)
            {
                if (ABC.Contains(input[i]))
                    num += 3;
                else if(DEF.Contains(input[i]))
                    num += 4;
                else if (GHI.Contains(input[i]))
                    num += 5;
                else if (JKL.Contains(input[i]))
                    num += 6;
                else if (MNO.Contains(input[i]))
                    num += 7;
                else if (PQRS.Contains(input[i]))
                    num += 8;
                else if (TUV.Contains(input[i]))
                    num += 9;
                else if (WXYZ.Contains(input[i]))
                    num += 10;
            }
            Console.WriteLine(num);
        }
    }
}
