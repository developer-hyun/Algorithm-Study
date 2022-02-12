//백준 9012번 괄호
/*열고 닫힘이 다 되면 VPS
열고 닫힘이 불완전하면 VPS가 아닌 문자열
VPS 인지 아닌지 판단해서 YES or No

스택 비어있는 상태에서 s.top해서 오류

다 돌면 스택 비워주기*/

/*
#include <iostream>
#include <stack>

using namespace std;

int main()
{
	int k;
	cin >> k;

	//스택 생성
	stack<char> s;

	int par = 0;

	for (int i = 0; i < k; i++)
	{
		string a;
		cin >> a;

		s.push(a[0]);

		for (int i = 1; i < a.length(); i++)
		{
			if (s.empty())
			{
				s.push(a[i]);
			}
			else if (s.top() == '(' && a[i] == ')')
			{
				s.pop();
			}
			else
			{
				s.push(a[i]);
			}
		}

		if (s.empty())
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";

		while (!s.empty())
			s.pop();
	}
}
*/