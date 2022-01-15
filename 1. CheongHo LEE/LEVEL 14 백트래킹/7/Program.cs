using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _7
{
    internal class Program
    {
        //첫째줄 입력 받는 배열
        static int N;
        //둘째 줄 입력 받는 배열
        static string An;
        //셋째 줄 입력 받는 배열
        static string operators;
        //계산할 값 저장 배열
        static string[] AnArray = new string[N];
        static int[] AnArray2 = new int[N];
        //연산자 배열
        static string[] operatorsArray1 = new string[4];
        static int[] operatorsArray2 = new int[4];

        //산술연산자 저장공간
        static int[] oper = new int[10];
        //연산되어 나온 값
        static int output;
        //사칙연산 기호의 총갯수
        static int sum;
        //최소
        static int min = 1000000000;
        //최대
        static int max= -1000000000;

        public static void ArithmeticOperation(int i)
        {
            if (oper[i] == 0) //덧셈
            {
                output = output + AnArray2[i + 1];
            }
            else if (oper[i] == 1) //뺄셈
            {
                output = output - AnArray2[i + 1];
            }
            else if (oper[i] == 2) //곱셈
            {
                output = output * AnArray2[i + 1];
            }
            else if (oper[i] == 3) //나눗셈
            {
                if (output < 0)
                    output = (-1) * ((output * (-1)) / Convert.ToInt32(AnArray[i + 1]));
                else
                    output = output / Convert.ToInt32(AnArray2[i + 1]);
            }
        }

        public static void Operator(int count)
        {
            if (count == sum)
            {
                output = AnArray2[0];
                for (int i = 0; i < AnArray2.Length - 1; i++)
                {
                    //사칙연산
                    ArithmeticOperation(i);
                }

                if (output < min)
                    min = output;
                if (output > max)
                    max = output;

                output = 0;
            }
            else
            {
                for (int i = 0; i < 4; i++)
                {
                    if (Convert.ToInt32(operatorsArray2[i]) == 0)
                    {
                        continue;
                    }
                    else
                    {
                        oper[count] = i;
                        operatorsArray2[i] = (Convert.ToInt32(operatorsArray2[i]) - 1);
                        Operator(count + 1);
                        operatorsArray2[i] = (Convert.ToInt32(operatorsArray2[i]) + 1);
                    }
                }
            }
        }
        static void Main(string[] args)
        {
            N = Convert.ToInt32(Console.ReadLine());
            An = Console.ReadLine();
            operators = Console.ReadLine();
            AnArray = An.Split(' ');
            AnArray2 = new int[N];
            operatorsArray1 = operators.Split(' ');

            for (int i = 0; i < AnArray.Length; i++)
            {
                AnArray2[i] = Convert.ToInt32(AnArray[i].ToString());
            }

            for (int i = 0; i < operatorsArray1.Length; i++)
            {                
                operatorsArray2[i] = Convert.ToInt32(operatorsArray1[i].ToString());
                sum += Convert.ToInt32(operatorsArray1[i].ToString());
            }

            Operator(0);

            Console.WriteLine(max);
            Console.WriteLine(min);

            Console.ReadKey();
        }
    }
}
