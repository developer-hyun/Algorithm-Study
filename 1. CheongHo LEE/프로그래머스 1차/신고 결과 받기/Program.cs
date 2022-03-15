using System;
using System.Collections.Generic;
namespace 신고_결과_받기
{
    public class Solution //신고 결과 받기
    {
        public static void Reset2(int[,] array) //초기화
        {
            for (int i = 0; i < array.GetLength(0); i++)
            {
                for (int j = 0; j < array.GetLength(1); j++)
                {
                    array[i, j] = 0;
                }
            }
        }
        public static void Reset(int[] array) //초기화
        {
            for (int i = 0; i < array.Length; i++)
            {
                array[i] = 0;
            }
        }

        public int[] solution(string[] id_list, string[] report, int k)
        {
            int[] answer = new int[id_list.Length];
            int[,] reportArray = new int[id_list.Length, id_list.Length];
            int[] countArray = new int[id_list.Length];

            Reset2(reportArray);
            Reset(answer);
            Reset(countArray);

            for (int i = 0; i < report.Length; i++)
            {
                string[] reports = report[i].Split(' ');
                //신고자
                string firstRts = reports[0];
                //신고당한자
                string secondRts = reports[1];

                int first = 0;
                int second = 0;

                //신고자와 신고당한자의 번호를 알기 위한 과정
                for (int j = 0; j < id_list.Length; j++)
                {
                    if (id_list[j] == firstRts)
                        first = j;
                    if (id_list[j] == secondRts)
                        second = j;
                }
                //같은 신고이력이 없으면
                if (reportArray[first, second] == 0)
                {
                    //신고했음을 표기
                    reportArray[first, second] = 1;
                    //신고당한자 횟수 증가
                    countArray[second] += 1;
                }
            }
            for (int i = 0; i < reportArray.GetLength(0); i++)
            {
                for (int j = 0; j < reportArray.GetLength(1); j++)
                {
                    if (reportArray[i, j] == 1 && countArray[j] >= k)
                    {
                        answer[i] += 1;
                    }
                }
            }
            return answer;
        }
    }    
    public class Solution2 //숫자 문자열과 영단어
    {
        public int solution(string s)
        {
            Dictionary<string, int> num = new Dictionary<string, int>();
            num.Add("zero", 0);
            num.Add("one", 1);
            num.Add("two", 2);
            num.Add("three", 3);
            num.Add("four", 4);
            num.Add("five", 5);
            num.Add("six", 6);
            num.Add("seven", 7);
            num.Add("eight", 8);
            num.Add("nine", 9);
            string s2 = "";
            foreach (var item in num)
            {
                s = s.Replace(item.Key.ToString(), item.Value.ToString());
            }
            int answer = Convert.ToInt32(s);
            return answer;
        }
    }

}
