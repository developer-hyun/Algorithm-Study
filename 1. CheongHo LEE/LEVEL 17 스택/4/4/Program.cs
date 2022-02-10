using System;
using System.Collections;
using System.Text;
namespace _4
{
    class Program
    {
        //균형잡힌 괄호
        static public void balanced(Stack stack, int j, string PS)
        {
            //괄호문양이 아닐시에는 stack을 쌓지 않는다.
            if (PS[j] == '(' || PS[j] == ')' || PS[j] == '[' || PS[j] == ']')
            {
                //맨 초기값
                if (stack.Count == 0)
                    stack.Push(PS[j]);
                else
                {
                    // '()' OR '[]' 모양이 만들어질때마다 pop시켜서
                    //stack이 올바른 괄호 문자열이라면 모두 pop될것이고
                    //아니라면 몇개가 남을것이다.
                    if ((stack.Peek().ToString() == "(" && PS[j] == ')') || (stack.Peek().ToString() == "[" && PS[j] == ']'))
                    {
                        stack.Pop();
                    }
                    else
                        stack.Push(PS[j]);
                }
            }
        }
        static void Main(string[] args)
        {
            StringBuilder sb = new StringBuilder();
            while(true)
            { 
                //입력받기
                string PS = Console.ReadLine();

                //break조건

                if (PS == ".")
                    break;
                
                Stack stack = new Stack();

                for (int j = 0; j < PS.Length; j++)
                {
                    balanced(stack, j, PS);
                }
                //stack의 길이가 0일때만 YES
                sb.AppendLine(stack.Count == 0  ? "yes" : "no");
            }
            Console.WriteLine(sb);
        }
    }
}

