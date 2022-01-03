using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _3
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int input = Convert.ToInt32(Console.ReadLine());
            int x, y;
            int xValue = 1;
            int yValue = 1;
            int count = 1;
            bool isOdd = false;
            bool go = false; //대각선으로 내려가겠다
            bool turn = false; //아래 혹은 옆으로 이동하는 작업을 했는가 판단해주는 값
            int check;
            while (count < input)//(0,1), 2/1, isXzero == true
            {
                if(xValue == 1 || yValue ==1)
                {
                    check = xValue + yValue;
                    isOdd = (check % 2 == 0) ? true : false;
                    if(turn == true)
                        go = false;
                }
                if(isOdd == true)
                {
                    if (go == true)
                    {
                        yValue += 1;
                        xValue -= 1;
                        if(turn == false)
                            turn = true;
                    }
                    else
                    {
                        yValue += 1;
                        go = true;
                        turn = false;
                    }
                    count++;
                }
                else
                {
                    if (go == true)
                    {
                        xValue += 1;
                        yValue -= 1;
                        if (turn == false)
                            turn = true;
                    }
                    else
                    {
                        xValue += 1;
                        go = true;
                        turn = false;
                    }
                    count++;
                }
            }
            Console.WriteLine(xValue + "/" + yValue);
            Console.ReadKey();

        }
    }
}
