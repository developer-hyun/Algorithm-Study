using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _6
{
    class Program
    {
        static void Main(string[] args)
        {
            StringBuilder sb = new StringBuilder();
            int N = Convert.ToInt32(Console.ReadLine());
            List<List<int>> points = new List<List<int>>();
            int[,] p = new int[N, 2];

            for (int i = 0; i < N; i++)
            {
                string input = Console.ReadLine();
                string[] inputdata = input.Split(' ');
                points.Add(new List<int> { Convert.ToInt32(inputdata[0]), Convert.ToInt32(inputdata[1]) });
            }            

            var output = from point in points
                         orderby point[0], point[1]   
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
