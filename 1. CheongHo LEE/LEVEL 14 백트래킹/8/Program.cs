using System;
using System.Text;

namespace beakjoon
{
    class _8
    {
        static int range, length;
        static int[] tempArr = new int[21];
        // 값 출력을 위한 정수 배열
        static int[] arr = new int[21];
        // 값 출력을 위한 정수 배열
        static string[] awaytemp = new string[21];
        // 값 출력을 위한 정수 배열
        static int[] awayArr = new int[21];
        // 중복 제거를 위한 bool 배열
        static bool[] visited = new bool[21];
        // 2차원 배열
        static int[,] all = new int[21, 21];
        static StringBuilder output = new StringBuilder();

        static int min = 1000000000;
        static int arrsum, awaysum;
        
        //DFS 알고리즘
        public static void DFS(int cnt)
        {
            // 출력할 배열이 완성되면 문자열 출력
            if (cnt == length)
            {
                StringBuilder sb = new StringBuilder();
                StringBuilder sb2 = new StringBuilder();
                for (int i = 1; i <= range; i++)
                {
                    if (Array.Exists(arr, element => element == i))
                    {
                        continue;
                    }
                    else
                    {
                        sb2.Append($"{i} ");
                    }
                }
                for (int i = 0; i < length; i++)
                {
                    sb.Append($"{arr[i]} ");
                }
                awaytemp = sb2.ToString().Split(' ');

                for (int i = 0; i < length; i++)
                {
                    awayArr[i] = Convert.ToInt32(awaytemp[i]);
                }

                for (int i = 0; i < length; i++)
                {
                    for (int j = 0; j < length; j++)
                    {
                        if (i == j)
                            continue;
                        else
                        {
                            arrsum += all[arr[i], arr[j]];
                            awaysum += all[awayArr[i], awayArr[j]];
                        }

                        //if (length - i == 1 && length != 2)
                        //{
                        //    arrsum += all[arr[i], arr[0]];
                        //    arrsum += all[arr[0], arr[i]];
                        //    awaysum += all[awayArr[i], awayArr[0]];
                        //    awaysum += all[awayArr[0], awayArr[i]];
                        //    Console.WriteLine("마지막입니다");
                        //    Console.WriteLine("x : " + arr[i] + " y : " + arr[0] + " 정순 : " + all[arr[i], arr[0]] + " 역순 : " + all[arr[0], arr[i]]);
                        //    Console.WriteLine(all[arr[i], arr[0]]);
                        //    Console.WriteLine("어웨이x : " + awayArr[i] + " 어웨이y : " + awayArr[0] + " 어웨이정순 : " + all[awayArr[i], awayArr[0]] + " 어웨이 역순 : " + all[awayArr[0], awayArr[i]]);

                        //}
                        //else
                        //{
                        //    arrsum += all[arr[i], arr[i + 1]];
                        //    awaysum += all[awayArr[i], awayArr[i + 1]];
                        //    arrsum += all[arr[i + 1], arr[i]];
                        //    awaysum += all[awayArr[i + 1], awayArr[i]];
                        //    Console.WriteLine("x : " + arr[i] + " y : " + arr[i + 1] + " 정순 : " + all[arr[i], arr[i + 1]] + " 역순 : " + all[arr[i + 1], arr[i]]);
                        //    Console.WriteLine(all[arr[i], arr[i + 1]]);
                        //    Console.WriteLine("어웨이x : " + awayArr[i] + " 어웨이y : " + awayArr[i + 1] + " 어웨이정순 : " + all[awayArr[i], awayArr[i + 1]] + " 어웨이역순 : " + all[awayArr[i + 1], awayArr[i]]);
                        //}
                    }
                    
                }
                //Console.WriteLine("arrsum : " + arrsum);
                //Console.WriteLine("awaysum : " + awaysum);
                if (min > Math.Abs(arrsum - awaysum))
                    min = Math.Abs(arrsum - awaysum);
                arrsum = 0;
                awaysum = 0;
               // output.AppendLine(sb.ToString());
            }

            // 문자열 완성이 안됬을 시 반복
            else
            {
                for (int i = 1; i <= range; i++)
                {
                    if (!visited[i])
                    {
                        if ((cnt > 0 && arr[cnt - 1] < i) || cnt == 0)
                        {
                            visited[i] = true;
                            arr[cnt] = i;
                        }
                        else
                        {
                            continue;
                        }
                        // 재귀 호출
                        DFS(cnt + 1);

                        // 다음 문자열 생성을 위해 bool 초기화
                        visited[i] = false;
                    }
                }
            }
        }

        public static void Main(string[] args)
        {
            int temp = Convert.ToInt32(Console.ReadLine());
            for (int i = 0; i < temp; i++)
            {
                tempArr[i] += i;
            }
            for (int i = 1; i <= temp; i++)
            {

                string temp2 = Console.ReadLine();
                string[] temp3 = temp2.Split(' ');
                for (int j = 1; j <= temp; j++)
                {
                    all[i, j] = Convert.ToInt32(temp3[j-1]);
                }
            }
            //수열의 범위 
            range = temp;

            //문자열의 길이
            length = temp / 2;

                       

            DFS(0);
            Console.WriteLine(min);
            Console.ReadKey();
        }
    }
}