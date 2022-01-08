using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _4
{
    class Program
    {
        static void Main(string[] args)
        {
            StringBuilder sb = new StringBuilder();
            int N = Convert.ToInt32(Console.ReadLine());
            int[] array = new int[N];
            int[] modeArray = new int[8001];
            int sum = 0;
            for (int i = 0; i < N; i++)
            {
                array[i] = Convert.ToInt32(Console.ReadLine());
                sum += array[i];
                modeArray[array[i]] += 1;
            }

            Array.Sort(array);
            Console.WriteLine(Math.Round(Convert.ToDouble(sum) / Convert.ToDouble(N), MidpointRounding.AwayFromZero)); //산술평균
            Console.WriteLine(array[N / 2]); //중앙값
            Console.WriteLine(Mode(array, N)); //최빈값
            Console.WriteLine(array[array.Length - 1] - array[0]); //범위

            Console.ReadKey();
        }
        public static int Mode(int[] array, int N) //최빈값
        {
            int mode = 0;
            int output = 0;
            bool check = false;
            int[] tmp = new int[N];
            for (int i = 0; i < array.Length; i++)
            {
                int count = 0;
                for (int j = 0; j < array.Length; j++)
                {
                    if (array[i] == array[j])
                    {
                        count += 1;
                        tmp[i] += 1;
                    }
                }
                if (count == mode && output != array[i] && check == false)
                {
                    output = array[i];
                    check = true;
                }
                else if (count > mode)
                {
                    mode = count;
                    output = array[i];
                    check = false;
                }
            }
            return output;
        }
    }
}
