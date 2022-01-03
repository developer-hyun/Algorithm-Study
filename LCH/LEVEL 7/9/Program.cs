using System;

namespace _9
{
    class Program
    {
        static void Main(string[] args)
        {
            string input = Console.ReadLine();    
            int count = 0;
            
            for (int i = 0; i < input.Length; i++)
            {
                string check;
                if (input[i] == 'c' || input[i] == 'd' || input[i] == 'l' || input[i] == 'n' || input[i] == 's' || input[i] == 'z') //크로아티아 알파벳에 걸리는 문자들일때
                {
                    if (i + 1 < (input.Length)) //그 다음글자가 있을때
                    {
                        check = input[i].ToString() + input[i + 1].ToString(); 
                        if (check.Contains("c=") || check.Contains("c-") || check.Contains("d-") || check.Contains("lj") || check.Contains("nj") || check.Contains("s=") || check.Contains("z=")) //lj
                        {
                            i += 1;
                        }
                        else if (check.Contains("dz")) 
                        {
                            if(i + 2 < (input.Length) && input[i+2].ToString() == "=") //dz=과 dz를 분리하기 위해 만든 코드
                                i += 2;
                        }
                        count++;
                    }
                    else
                        count++;
                }
                else
                {
                    count++; 
                }
            }
            Console.WriteLine(count);
        }
    }
}
