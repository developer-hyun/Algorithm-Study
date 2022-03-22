using System;

namespace _5
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] N_C = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            int N = N_C[0];
            int C = N_C[1];

            int[] X = new int[N];
            for (int i = 0; i < N; i++)
            {
                X[i] = Convert.ToInt32(Console.ReadLine());
            }

            Array.Sort(X);

            long start = 1;
            long end = X[^1];
            //mid의 의미는 공유기간의 거리
            //가장 인접한 두 공유기 사이의 거리를 최대로 하라는 말은
            //선택한 공유기 중 가장 가까운 거리가 최소값이고
            //나머지는 그 최소값보다 크면 가장 인접하지 않은 공유기가 된다.
            //예를 들어 1 2 8은 1와 2간 거리가 1이고 2와 8은 6이다.
            //즉 가장 인접한 공유기의 거리는 1이된다.
            //만약 1 4 8 이면 가장 근접한 거리는 3이고 나머지는 4이다.

            //다시 말해 가장 인접한 두 공유기의 사이가 선택한 모든 공유기끼리의 거리중 최소값이란 의미이다.
            //따라서 mid는 최소값이다.
            long mid = (start + end) / 2;

            while (start <= end)
            {
                int count = 0;
                int tmp = 0;
                //공유기 C개를 뽑기 위한 포문
                for (int i = 0; i < N; i++)
                {
                    //맨처음 공유기를 선택
                    if (i == 0)
                    {
                        count++;
                        tmp = X[i];
                    }
                    else
                    {
                        //그 다음 선택할 공유기와 이전 선택한 공유기의 거리가
                        //mid보다 크거나 같아야만 mid의 최소 거리로 선정할 수 있기 때문에
                        //다음과 같은 조건문을 추가함
                        if (X[i] - tmp >= mid)
                        {
                            count++;
                            tmp = X[i];
                        }
                    }
                }
                //공유기간에 거리가 너무 짧으면 선택되는 공유기가 너무 많아진다
                //예를들어 예제 1번에서 공유기간에 가장 인접한 공유기간 거리가 1이면
                //1 2 4 8 9 모두 선택가능하므로 최소거리를 늘려야한다.
                //그래서 start = mid + 1
                if (count >= C)
                {
                    start = mid + 1;
                    mid = (start + end) / 2;
                }
                else
                {
                    end = mid - 1;
                    mid = (start + end) / 2;
                }
            }

            Console.WriteLine(mid);


        }
    }
}
