using System;
using static System.Console;

namespace _1
{
    class Program
    {
        public static void Main(string[] args)
        {
            string abc = ReadLine();
            string[] word = abc.Split(' ');

            //21억까지 int로 받을 수 있다 즉 21억까지 계속 계산하는 포문으로 만들게되면 안된다는 의미이다.
            int a = int.Parse(word[0]); 
            int b = int.Parse(word[1]);
            int c = int.Parse(word[2]);
                        
            if (b >= c) //b > c이면 아무리 계속 팔아도 순익분기점을 넘길 수 없음 
            {
                WriteLine(-1);
                return;
            }
            else
            {
                //(c - b) >> 한대를 팔때 얻을 수 있는 이익, n개를 팔면 (c-b)n = a인 지점이 n개 이므로 a보다 많이 벌려면 n+1을 해야한다이어야 한다. 
                //(c-b)n = a인 지점이 n개 이므로 a보다 많이 벌려면 n+1을 해야한다
                int n = a / (c - b);
                WriteLine(n + 1);
            }
        }
    }
}
