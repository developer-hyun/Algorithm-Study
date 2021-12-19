using System;

namespace _5
{
    class Program
    {
        static void Main(string[] args)
        {
            int T = Convert.ToInt32(Console.ReadLine());
            for (int i = 0; i < T; i++)
            {
                string input = Console.ReadLine();
                string[] inputData = input.Split(' ');

                double H = Convert.ToInt32(inputData[0]); //6
                double W = Convert.ToInt32(inputData[1]); //12
                double N = Convert.ToInt32(inputData[2]); //10
                                
                double X = Math.Ceiling(N / H); //2
                double Y = N % H; //4
                string output;
                if (Y == 0) //0이라는 뜻은 꼭대기 층을 의미함
                    Y = H; 

                if(X <= 9) //6 12 72 >> 6012가 나오면 안되기때문에 두자리수인지 아닌지 구별
                    output = Y.ToString() + "0" + X.ToString(); //42 > 402
                else
                    output = Y.ToString() + X.ToString(); 

                Console.WriteLine(output);
            }
        }
    }
}
