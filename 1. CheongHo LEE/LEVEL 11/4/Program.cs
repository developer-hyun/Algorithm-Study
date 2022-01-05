using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _4
{
    class Program
    {
        static void Main(string[] args)
        {
            string input = Console.ReadLine();
            string[] inputData = input.Split(' ');
            int N = Convert.ToInt32(inputData[0]);
            int M = Convert.ToInt32(inputData[1]);
                       
            string[,] board = new string[N, M];
            string[,] Chess = new string[8, 8];

            int BlackCount = 0;
            int WhiteCount = 0;
            int count = 100;

            for (int i = 0; i < N; i++) //예제 입력과 동일한 보드판 만들기
            {
                string BlackAndWrite = Console.ReadLine();
                BlackAndWrite.ToCharArray();
                for (int j = 0; j < M; j++)
                {
                    board[i, j] = BlackAndWrite[j].ToString();
                }
            }
            for (int i = 0; i < N - 7 ; i++) //보드판에서 8x8체스판 꺼내오기
            {
                for (int j = 0; j < M - 7 ; j++)
                {
                    for (int k = 0; k < 8; k++)
                    {
                        for (int l = 0; l < 8; l++)
                        {
                            Chess[k, l] = board[k+i, l+j];
                        }
                    }

                    BlackCount = ChessCompareToBlack(Chess, i, j); //체스판을 B으로 시작하는 판으로 싹 갈아 엎어버리기
                    WhiteCount = ChessCompareToWhite(Chess, i, j); //체스판을 W으로 시작하는 판으로 싹 갈아 엎어버리기

                    if (BlackCount >= WhiteCount)
                    {
                        if (count >= WhiteCount)
                        {
                            count = WhiteCount;
                        }
                    }
                    else
                    {
                        if (count >= BlackCount)
                            count = BlackCount;
                    }
                }
            }
            
            Console.WriteLine(count);
           
            Console.ReadKey();
        }
        public static int ChessCompareToBlack(string[,] Chess, int x, int y)
        {
            string[,] tmp = new string[8, 8];

            for (int i = 0; i < 8; i++)
            {
                for (int j = 0; j < 8; j++)
                {
                    tmp[i, j] = Chess[i, j];
                }
            }

            string[] black = { "B", "W", "B", "W", "B", "W", "B", "W" };
            string[] white = { "W", "B", "W", "B", "W", "B", "W", "B" };
            int index = 0;
            int BlackCount = 0;
            for (int i = 0; i < 8; i++)
            {
                int k = 0;
                for (int j =0; j < 8; j++)
                {
                    if (index == 0)
                    {
                        if (tmp[i, j] != black[k])
                        {
                            tmp[i, j] = black[k];
                            BlackCount += 1;
                        }
                    }
                    else if (index % 2 == 1)
                    {
                        if (tmp[i, j] != white[k])
                        {
                            tmp[i, j] = white[k];
                            BlackCount += 1;
                        }
                    }
                    else if(index % 2 == 0)
                    {
                        if (tmp[i, j] != black[k])
                        {
                            tmp[i, j] = black[k];
                            BlackCount += 1;
                        }
                    }
                    
                    k += 1;
                }
                index += 1;
            }
            return BlackCount;
        }
        public static int ChessCompareToWhite(string[,] Chess, int x, int y)
        {
            string[,] tmp = new string[8,8];

            for (int i = 0; i < 8; i++)
            {
                for (int j = 0; j < 8; j++)
                {
                    tmp[i, j] = Chess[i, j];
                }
            }
            string[] black = { "B", "W", "B", "W", "B", "W", "B", "W" };
            string[] white = { "W", "B", "W", "B", "W", "B", "W", "B" };
            int index = 0;
            int WhiteCount = 0;
            for (int i = 0; i < 8; i++)
            {
                int k = 0;
                for (int j = 0; j < 8; j++)
                {
                    if (index == 0)
                    {
                        if (tmp[i, j] != white[k])
                        {
                            tmp[i, j] = white[k];
                            WhiteCount += 1;
                        }
                    }
                    else if (index % 2 == 1)
                    {
                        if (tmp[i, j] != black[k])
                        {
                            tmp[i, j] = black[k];
                            WhiteCount += 1;
                        }
                    }
                    else if (index % 2 == 0)
                    {
                        if (tmp[i, j] != white[k])
                        {
                            tmp[i, j] = white[k];
                            WhiteCount += 1;
                        }
                    }
                    
                    k += 1;
                }
                index += 1;
            }
            return WhiteCount;
        }
       
    }

}
