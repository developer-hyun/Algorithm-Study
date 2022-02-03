using System;

namespace _1
{
    class Program
    {
        static void Main(string[] args)
        {
            //초기화
            int[] inputData = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            int N, K, count;
            N = inputData[0];
            K = inputData[1];
            count = 0;

            //Won담을 행렬
            int[] Won = new int[N];

            for (int i = 0; i < N; i++)
            {
                Won[i] = int.Parse(Console.ReadLine());
            }

            //가장 큰 돈으로 먼저 나눠서 나눌 수 있는지를 확인해야함
            //예를들어 52000원이면 50000원부터 나눌 수 있음
            for (int i = N - 1; i >= 0; i--)
            {
                //나눌수 있다면
                if (K / Won[i] != 0)
                {
                    //몫이 해당 Won으로 나눌 수 있는 값이기 때문에 count에 추가
                    count += K / Won[i];
                    //K는 나눈 값은 빼고 나머지만 있으면 위와 같은 작업을 반복할 수 있음
                    K = K % Won[i];
                }
            }

            Console.WriteLine(count);
        }
    }
}
