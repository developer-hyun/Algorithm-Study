using System;
using System.Collections.Generic;
namespace _4
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int T = Convert.ToInt32(Console.ReadLine());
            for (int i = 0; i < T; i++)
            {
                int[] NM = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
                int[] priority = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);

                //M
                int M = NM[1];
                //문서 중요도 저장용 큐
                Queue<int> priorityQ = new Queue<int>();
                //문서 순서 저장용 큐
                Queue<int> priorityIndex = new Queue<int>();

                for (int j = 0; j < priority.Length; j++)
                {
                    priorityQ.Enqueue(priority[j]);
                    priorityIndex.Enqueue(j);
                }

                //중요도 내림차순으로 정렬
                Array.Sort(priority);
                Array.Reverse(priority);

                //몇번째로 인쇄됐는지 확인하기 위한 변수
                int count = 0;
                // 인쇄했을때 문서의 순서와 M이 같은지 확인하기 위한 변수
                int index = -1;

                //함수 실행
                while(priorityQ.Count != 0)
                {
                    //Peek()가 내림차순정렬된 배열의 인덱스 0인 값과 같지 않다는것은
                    //중요도가 가장 큰 문서가 아니라는 의미이므로
                    //다시 맨 뒤로 보낸다
                    if(priorityQ.Peek() != priority[NM[0] - priorityQ.Count])
                    {
                        priorityQ.Enqueue(priorityQ.Dequeue());
                        priorityIndex.Enqueue(priorityIndex.Dequeue());
                    }
                    //중요도와 배열의 값이 같으면 
                    //중요도가 가장 큰 문서라는 의미 이므로
                    //데큐하고 인덱스를 저장하고
                    //count 한다.
                    else
                    {
                        priorityQ.Dequeue();
                        index=priorityIndex.Dequeue();
                        count++;
                    }
                    //NM[1] = M 이므로
                    //인덱스와 M이 같다는 말은
                    //내가 원하는 문서를 데큐 했다는 의미이므로 
                    //count를 출력하고 더이상 반복분을 진행하지 않는다.
                    if(index == NM[1])
                    {
                        Console.WriteLine(count);
                        break;
                    }
                }

            }
        }
    }
}
