using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _1
{
    class Program
    {
        static void Main(string[] args)
        {
            string input = Console.ReadLine();
            string second = Console.ReadLine();

            string[] inputdata = input.Split(' ');
            int N = Convert.ToInt32(inputdata[0]);
            int M = Convert.ToInt32(inputdata[1]);

            string[] secondData = second.Split(' ');

            int[] secondInt = new int[secondData.Length];

            
            for (int i = 0; i < secondData.Length; i++)
            {
                secondInt[i] = Convert.ToInt32(secondData[i]);
            }

            //두번째 줄 데이터 오름차순 정리
            Array.Sort(secondInt);

            int output = blackJack(M, secondInt);

            Console.WriteLine(output);
            Console.ReadKey();
        }
        public static int blackJack(int M, int[] secondInt)
        {
            int first;
            int second;
            int third;
            int max = 0;
            int sum; 
            for (int i = 0; i < secondInt.Length; i++)
            {
                first = Convert.ToInt32(secondInt[i]);
                for (int j = i+1; j < secondInt.Length; j++)
                {
                    second = Convert.ToInt32(secondInt[j]);
                    if (M >= (first + second))
                        for (int k = j + 1; k < secondInt.Length; k++)
                        {
                            third = Convert.ToInt32(secondInt[k]);
                            if (M >= (first + second + third))
                            {
                                sum = (first + second + third);
                                if (max == 0)
                                    max = sum;

                                if ((M - sum) <= M - max)
                                {
                                    max = sum;
                                }
                            }
                            else
                                break;
                        }
                    else
                        break;
                   
                }
            }

            return max;
        }
    }
}
