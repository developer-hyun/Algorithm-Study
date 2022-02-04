using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
namespace _2
{
    class Program
    {
        static void Main(string[] args)
        {
            int N = Convert.ToInt32(Console.ReadLine());

            //2중리스트
            List<List<int>> Meetings = new List<List<int>>();

            int start, count;

            start = 0;
            count = 0;

            for (int i = 0; i < N; i++)
            {
                var input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
                Meetings.Add(new List<int> { input[0], input[1] });
            }

            //정렬
            var sortedMeeting = Meetings.OrderBy(x => x[1]).ThenBy(x => x[0]).ToArray();

            for (int i = 0; i < N; i++)
            {
                if (start <= Convert.ToInt32(sortedMeeting[i][0]))
                {
                    //Console.WriteLine("Start : " + Convert.ToInt32(sortedMeeting[i][0]) + " end : " + Convert.ToInt32(sortedMeeting[i][1]));
                    start = Convert.ToInt32(sortedMeeting[i][1]);
                    count += 1;
                }                
            }
            Console.WriteLine(count);
        }
    }
}
