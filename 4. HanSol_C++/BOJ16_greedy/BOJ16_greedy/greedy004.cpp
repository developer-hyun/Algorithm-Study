//백준 1541번 잃어버린 괄호

/*부호를 만났는지 체크 안만났으면 누적해서 정수로 저장*/

/*
#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int len, tmp;
int sum = 0;
bool flag; // '-'가 등장했는지 체크
char str[51];

int main()
{
	cin >> str;
	len = strlen(str); //식의 길이

	for (int i = 0; i <= len; i++)
	{

		if (str[i] == '+' || str[i] == '-' || i == len) // '+','-'가 등장했거나 혹은 수식의 끝일때
		{
			if (flag == false) //'-'등장 이전 모든 값 양수화
			{
				sum += tmp;
				tmp = 0;
			}
			else // (flag == true), '-'등장 이후로 모든 값 음수화
			{
				sum -= tmp;
				tmp = 0;
			}

			if (str[i] == '-') flag = true; // '-'등장 시 체크

		}
		else // tmp변수에 값 누적
		{
			tmp *= 10;
			tmp += str[i] - '0'; // char 데이터를 정수로 변환
		}
	}

	cout << sum;
}
*/

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//    string f;
//    cin >> f;
//
//    int result = 0;
//    string num;
//    bool isMinus = false;
//
//    for (int i = 0; i <= f.size(); i++) 
//    {
//
//        if (f[i] == '-' || f[i] == '+' || i == f.size()) 
//        {
//            if (isMinus) 
//            {
//                result -= stoi(num);
//                num = "";
//            }
//            else 
//            {
//                result += stoi(num);
//                num = "";
//            }
//        }
//        else 
//        {
//            num += f[i];
//        }
//
//        if (f[i] == '-') 
//        {
//            isMinus = true;
//        }
//    }
//
//    cout << result;
//}
