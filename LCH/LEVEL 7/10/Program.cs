using System;
using System.Collections.Generic;
namespace _10
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = Convert.ToInt32(Console.ReadLine());
            int count = 0;
            for (int k = 0; k < n; k++)
            {
                string input = Console.ReadLine();
                List<string> array = new();

                if (input.Length == 1) //들어온 문자열의 길이가 1이면 바로 넣어
                    array.Add(input[0].ToString());
                
                else if (input.Length >= 2) //들어온 문자열의 길이가 2이상이면 일단 2번째까지는 무조건 포함될 수 밖에 없기 때문에 일단 넣어
                {
                    array.Add(input[0].ToString());
                    array.Add(input[1].ToString());
                }

                for (int i = 2; i < input.Length; i++)
                {
                    if (input[i - 1].ToString() == input[i].ToString()) // 문자가 직전 문자와 같으면 넣어 반복된다는 뜻이니까
                    {
                        array.Add(input[i].ToString());
                    }
                    if (input[i - 1].ToString() != input[i].ToString()) // 다른 문자이면 
                    {
                        if (array.Contains(input[i].ToString())) // 해당 문자가 이미 문자열 안에 있으면 반복되는게 아니므로 끝내고
                        {
                            break;
                        }
                        else
                        {
                            array.Add(input[i].ToString());
                        }
                    }

                }
                string text = string.Join("", array.ToArray());
                if (text == input)
                    count += 1;
            }
            Console.WriteLine(count);
        }
    }
}
