using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _9
{
    class Program
    {
        static void Main(string[] args)
        {
            StringBuilder sb = new StringBuilder();
            int N = Convert.ToInt32(Console.ReadLine()); //회원 수
            List<List<string>> points = new List<List<string>>(); //나이와 이름 인덱스 저장 리스트, 인덱스는 가입순 정렬을 위함

            for (int i = 0; i < N; i++)
            {
                string input = Console.ReadLine(); //나이와 이름 입력받기
                string[] inputdata = input.Split(' '); //나이와 이름 쪼개기
                points.Add(new List<string> { inputdata[0], inputdata[1], Convert.ToString(i) }); //나이, 이름, 인덱스 순으로 입력
            }

            var output = from point in points
                         orderby Convert.ToInt32(point[0]), point[2] //나이순, 나이가 같으면 인덱스 순
                         select point[0] + " " + point[1];

            foreach (var item in output)
            {
                sb.AppendLine(item);
            }

            Console.WriteLine(sb);

            Console.ReadKey();

        }
    }
}
