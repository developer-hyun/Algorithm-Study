﻿using System;

namespace _3
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] K_N = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            //K
            long K = K_N[0];
            //N
            long N = K_N[1];
            //랜선의 전체길이
            long lengthSum = 0;
            //랜선배열
            long[] lengthArr = new long[K];
            //랜선 전처리
            for (int i = 0; i < K; i++)
            {
                long length = long.Parse(Console.ReadLine());
                lengthArr[i] = length;
                lengthSum += length;
            }

            //start, mid, end
            long start = 1;
            long end = lengthSum / N;
            long mid = (start + end) / 2;

            while (start <= end)
            {
                long count = 0;
                
                //mid로 각 랜선을 짜르고 만들 수 있는 랜선의 갯수를 구하자
                for (int i = 0; i < K; i++)
                {
                    count += lengthArr[i] / mid;
                }
                //원하는 값보다 랜선이 더 많이 만들어지면
                //더 큰수로 나눠야한다는 의미이므로
                //start = mid
                if (count >= N)
                {
                    start = mid+1;
                    mid = (start + end) / 2;
                }
                //end = mid
                else if (count < N)
                {
                    end = mid-1;
                    mid = (start + end) / 2;
                }
            }
            Console.WriteLine(mid);
        }
    }
}
