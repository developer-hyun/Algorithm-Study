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
            int N = Convert.ToInt32(Console.ReadLine());
            List<List<string>> points = new List<List<string>>();

            for (int i = 0; i < N; i++)
            {
                string input = Console.ReadLine();
                string[] inputdata = input.Split(' ');
                points.Add(new List<string> { inputdata[0], inputdata[1], i.ToString() }) ;
            }

            var output = from point in points
                         orderby point[0], point[2]
                         select point[0] + " " + point[1];

            foreach (var item in output)
            {
                sb.Append(item + '\n');
            }
            Console.WriteLine(sb);
            Console.ReadKey();

        }
    }
}
