//���� 10773�� ����
/*��������� 0, �ƴϸ� �� �հ�
for���� pop���� ���� ���� �ٱ� ������ ��������
���ϰ� while(!stack.size()) ���*/

/*
#include <iostream>
#include <stack>

using namespace std;

int main()
{
	int k;
	cin >> k;

	//���� ����
	stack<int> s;

	for (int i = 0; i < k; i++)
	{
		int a;
		cin >> a;

		if (a == 0)
		{
			if (s.empty())
				continue;
			else
				s.pop();
		}
		else
			s.push(a);
	}

	if (s.empty())
	{
		cout << "0" << "\n";
	}
	else
	{
		int result = 0;
		while (!s.empty())
		{
			result += s.top();
			s.pop();
		}

		cout << result << "\n";
	}

	//������ ����� �� ����
	//����: size�� pop���� ���� ���� �ٱ� ������ �׷��Ƿ� while ���
	//for (int i = 1; i <= s.size() + 1; i++)
	//{
	//	int result = 0;
	//	result += s.top();
	//	s.pop();
	//}
}
*/