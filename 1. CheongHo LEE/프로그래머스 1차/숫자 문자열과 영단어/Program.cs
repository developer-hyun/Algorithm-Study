using System;
using System.Collections.Generic;

public class Solution
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