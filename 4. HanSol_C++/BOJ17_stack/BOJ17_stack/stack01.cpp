//���� 10828�� ����
/*����: ���Լ���(LIFO), ���� �ʰ� ���� �����Ͱ� ���� ���� ������ ��, ���� ���ڿ�
ť: ���Լ���(FIFO), ���� ���� ���� �����Ͱ� ���� ���� ������ ��
LIFO -> last in first out

c++�� ���� split �Լ��� ����
stringstream: ���ڿ����� ���� ���ϴ� �ڷ����� �����͸� ������ �� ���

���� �ð��� �����ɷ���*/

/*
#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;

	//���� ����
	stack<int> s;

	for (int i = 0; i <= n; i++)
	{
		string command;
		getline(cin, command);

		if (command.find("push") != string ::npos)
		{
			string num;
			for (int i = 5; i < command.size(); i++)
			{
				num += command[i];
			}
			s.push(stoi(num));
		}
		else if (command == "pop")
		{
			if (s.size() == 0)
				cout << "-1" << "\n";
			else
			{
				cout << s.top() << "\n";
				s.pop();
			}
		}
		else if (command == "size")
			cout << s.size() << "\n";
		else if (command == "empty")
		{
			if (s.size() == 0)
				cout << "1" << "\n";
			else
				cout << "0" << "\n";
		}
		else if (command == "top")
		{
			if (s.size() == 0)
				cout << "-1" << "\n";
			else
				cout << s.top() << "\n";
		}
	}
}
*/