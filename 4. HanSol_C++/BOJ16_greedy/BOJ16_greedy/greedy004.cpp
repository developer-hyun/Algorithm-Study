//���� 1541�� �Ҿ���� ��ȣ

/*��ȣ�� �������� üũ �ȸ������� �����ؼ� ������ ����*/

/*
#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int len, tmp;
int sum = 0;
bool flag; // '-'�� �����ߴ��� üũ
char str[51];

int main()
{
	cin >> str;
	len = strlen(str); //���� ����

	for (int i = 0; i <= len; i++)
	{

		if (str[i] == '+' || str[i] == '-' || i == len) // '+','-'�� �����߰ų� Ȥ�� ������ ���϶�
		{
			if (flag == false) //'-'���� ���� ��� �� ���ȭ
			{
				sum += tmp;
				tmp = 0;
			}
			else // (flag == true), '-'���� ���ķ� ��� �� ����ȭ
			{
				sum -= tmp;
				tmp = 0;
			}

			if (str[i] == '-') flag = true; // '-'���� �� üũ

		}
		else // tmp������ �� ����
		{
			tmp *= 10;
			tmp += str[i] - '0'; // char �����͸� ������ ��ȯ
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
