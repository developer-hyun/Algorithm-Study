using System;
using System.Collections.Generic;
namespace _4
{
    class Program
    {
        static void Main(string[] args)
        {
            string input = Console.ReadLine();
            string[] OnlyPlus = input.Split('-');
            int output = 0;

            //만약 마이너스가 없다면 
            //OnlyPlus[0]에 모든 숫자들이 다 들어있을 것이다.
            //이를 다시 +로 쪼개면 +만 있을 경우의 output이 만들어진다.
            foreach (var item in OnlyPlus[0].Split('+'))
            {
                output += Convert.ToInt32(item);
            }

            //길이가 1이라는 뜻은
            //마이너스가 없었다는 뜻이다
            if(OnlyPlus.Length == 1)
                Console.WriteLine(output);
            else
            {
                //길이가 2이상인 경우 맨 앞에를 제외하고
                //뒤에 있는 모든것을 빼면 된다.
                for (int i = 1; i < OnlyPlus.Length; i++)
                {
                    string[] MinusStr = OnlyPlus[i].Split('+');
                    foreach (var item in MinusStr)
                    {
                        output -= Convert.ToInt32(item);
                    }
                }
                Console.WriteLine(output);
            }
        }
    }
}
