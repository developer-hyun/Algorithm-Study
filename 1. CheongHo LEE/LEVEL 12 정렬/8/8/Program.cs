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
            List<string> words = new List<string>();

            for (int i = 0; i < N; i++)
            {
                words.Add(Console.ReadLine());
            }
            words = words.Distinct().ToList(); // 여기를 잘 기억하자
            var output = from word in words
                         orderby word.Length, word
                         select word;

            foreach (var item in output)
            {
                sb.AppendLine(item);
            }
            Console.WriteLine(sb);

        }
    }
}
