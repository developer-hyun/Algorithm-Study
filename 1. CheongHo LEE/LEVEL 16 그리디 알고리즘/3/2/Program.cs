using System;

namespace _3
{
    class Program
    {
        static void Main(string[] args)
        {
            //이문제가 그리디인 이유는 각 사람마다 걸리는 인출시간이
            //앞사람의 인출시간이 무조건 작아야만 뒷사람이 작아지는 원리이기 때문이다
            //만약 맨 앞사람의 인출시간이 길다면
            //뒷사람 수 만큼 앞사람의 인출시간이 계속 더해진다
            //즉 앞사람은 무조건 인출시간이 짧아야만 한다

            int N = Convert.ToInt32(Console.ReadLine());
            var inputData = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            Array.Sort(inputData);

            int time = 0;

            
            for (int i = 0; i < inputData.Length; i++)
            {
                //첫번째 사람의 인출시간은 첫번째 사람
                //두번째 사람의 인출시간은 첫번째 사람 + 두번째 사람
                //세번째 사람의 인출시간은 첫번째 사람 + 두번째 사람 + 세번째 사람
                //N번째 사람의 인출 시간은 첫번째부터 N까지의 인출시간을 더하면 된다.
                for (int j = 0; j <= i; j++)
                {
                    time += inputData[j];
                }
            }

            Console.WriteLine(time);
        }
    }
}
