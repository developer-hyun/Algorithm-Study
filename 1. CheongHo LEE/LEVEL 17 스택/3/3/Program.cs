using System;
using System.Collections;
namespace _3
{
    class Program
    {
        static void Main(string[] args)
        {
            int N = Convert.ToInt32(Console.ReadLine());
            for (int i = 0; i < N; i++)
            {
                string PS = Console.ReadLine();
                Stack stack = new Stack();
                for (int j  = 0; j < PS.Length; j++)
                {
                    //맨 초기값
                    if (stack.Count == 0)
                        stack.Push(PS[j]);
                    else
                    {
                        //"()" 모양이 만들어질때마다 pop시켜서
                        //stack이 올바른 괄호 문자열이라면 모두 pop될것이고
                        //아니라면 몇개가 남을것이다.
                        if (stack.Peek().ToString() == "(" && PS[j] == ')')
                        {
                            stack.Pop();
                        }
                        else
                            stack.Push(PS[j]);
                    }
                }
                Console.WriteLine(stack.Count == 0 ? "YES" : "NO");
            }
           
        }
    }
}
