using System;
using System.Collections.Generic;
using System.Linq;
namespace _6
{
    internal class Program
    {
        static int[] NM = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
        static int[] indexArray = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);

        static List<int> list = new List<int>();

        //이동 연산했음음을 세는 변수
        //출력이 될 변수
        static int count = 0;

        //첫번째 연산했음을 세는 변수
        static int popCount = 0;
        static void First() //첫번째 연산
        {
            list.RemoveAt(0);
            popCount++;
        }
        static void Second() //두번째 연산
        {
            list.Add(list[0]);
            list.RemoveAt(0);
            count++;
        }

        static void Third() //세번째 연산
        {
            list.Insert(0, list[^1]);
            list.RemoveAt(list.Count-1);
            count++;
        }
        static void Main(string[] args)
        {
            for (int i = 1; i <= NM[0]; i++)
            {
                list.Add(i);
            }
            int index;
            for (int i = 0; i < indexArray.Length; i++)
            {
                index =list.IndexOf(indexArray[i]);
               
                if (index == 0)
                {
                    First();
                    continue;
                }
                //해당 원소의 위치가 리스트 크기의 절반에 위치해야만 
                //왼쪽으로 땡기는 것이 빠르다
                else if(index <= (list.Count/2))
                {
                    while (index > 0) //index가 0 일때 pop
                    {
                        Second();
                        index = list.IndexOf(indexArray[i]);                       
                    }
                    First();
                    continue;
                }
                else if(index > (list.Count / 2))
                {
                    while (index > 0)
                    {
                        Third();
                        index = list.IndexOf(indexArray[i]);
                    }
                    First();
                    continue;
                }
            }
            Console.WriteLine(count);
        }
    }
}
