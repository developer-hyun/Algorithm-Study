using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _10
{
    class Program
    {
        static void Main(string[] args)
        {
            StringBuilder sb = new StringBuilder();
            int N = Convert.ToInt32(Console.ReadLine()); //회원 수
            int[] array = new int[N];
            int[] check = new int[N];
            int[] output = new int[N];

            int rank = 0;
            string input = Console.ReadLine(); //나이와 이름 입력받기
            string[] inputdata = input.Split(' '); //나이와 이름 쪼개기

            Dictionary<int, int> keyValuePairs = new Dictionary<int, int>();

            for (int i = 0; i < inputdata.Length; i++)
            {
                array[i] = Convert.ToInt32(inputdata[i]);
                check[i] = Convert.ToInt32(inputdata[i]);
            }
            Array.Sort(check);

            for (int i = 0; i < check.Length; i++) //키값이 이미 있으면 추가하지 않는다.
            {
                if (keyValuePairs.ContainsKey(check[i]) == false)
                {
                    keyValuePairs.Add(check[i], rank);
                    rank += 1;
                }
            }

            //선 중복제거 후 딕셔너리에 값 넣는방법
            //check = check.Distinct().ToArray();

            //for (int i = 0; i < check.Length; i++)
            //{
            //    keyValuePairs.Add(check[i], i);
            //}

            for (int i = 0; i < array.Length; i++)
            {
                if(i == 0)
                    sb.Append(keyValuePairs[array[i]]);
                else 
                    sb.Append(" " + keyValuePairs[array[i]]);
            }

            
            Console.WriteLine(sb);

            Console.ReadKey();

        }
    }
}
