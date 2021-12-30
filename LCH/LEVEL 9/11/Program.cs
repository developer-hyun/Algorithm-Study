using System;

namespace _11
{
    class Program
    {
        static void Main(string[] args)
        {
            int T = Convert.ToInt32(Console.ReadLine());

            for (int i = 0; i < T; i++)
            {
                string input = Console.ReadLine();
                string[] inputdata = input.Split(' ');
                int x1, y1, r1, x2, y2, r2;

                x1 = Convert.ToInt32(inputdata[0].ToString());
                y1 = Convert.ToInt32(inputdata[1].ToString());
                r1 = Convert.ToInt32(inputdata[2].ToString());
                x2 = Convert.ToInt32(inputdata[3].ToString());
                y2 = Convert.ToInt32(inputdata[4].ToString());
                r2 = Convert.ToInt32(inputdata[5].ToString());

                //두 좌표사이의 거리의 제곱
                int d = ((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2));
                //두 반지름의 합의 제곱
                int pR = (r1 + r2) * (r1 + r2);
                int mR = (r1 - r2) * (r1 - r2);

                Console.WriteLine("거리 : " + d);
                Console.WriteLine("반지름의 합 : " + pR);
                Console.WriteLine("반지름의 차 : " + mR);

                if (d == pR || d == mR)
                {
                    if (x1 == x2 && y1 == y2 && r1 == r2)
                        Console.WriteLine("-1");
                    else
                        Console.WriteLine('1');
                }
                //좌표가 다른데 반지름의 합이 더 큰경우
                else if (mR < d && d < pR)
                    Console.WriteLine('2');
                else if (pR < d || mR > d)
                    Console.WriteLine('0');
                //좌표와 반지름이 모두 같은경우
                else if (x1 == x2 && y1 == y2 && r1 == r2)
                    Console.WriteLine("-1");
            }
        }
    }
}
