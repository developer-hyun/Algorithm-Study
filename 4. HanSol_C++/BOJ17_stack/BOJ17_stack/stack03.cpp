//���� 9012�� ��ȣ
/*���� ������ �� �Ǹ� VPS
���� ������ �ҿ����ϸ� VPS�� �ƴ� ���ڿ�
VPS ���� �ƴ��� �Ǵ��ؼ� YES or No

���� ����ִ� ���¿��� s.top�ؼ� ����

�� ���� ���� ����ֱ�*/

/*
#include <iostream>
#include <stack>

using namespace std;

int main()
{
	int k;
	cin >> k;

	//���� ����
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