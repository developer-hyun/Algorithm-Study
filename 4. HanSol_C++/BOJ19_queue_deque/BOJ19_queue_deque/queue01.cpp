//���� 18258�� ť2
/*���ð� ��������� �� �ڷ� push, pop ����
�ð����⵵: O(1), Ư�������͸� ã������ O(n)

cin, cout�� printf�� ���� �����Ƿ� �߰������� �ڵ带 �־������*/

/*
#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	//ť ����
	queue<int> q;

	for (int i = 0; i <= n; i++)
	{
		string command;
		getline(cin, command);

		if (command.find("push") != string::npos)
		{
			int num = stoi(command.substr(5));
			q.push(num);
		}
		else if (command == "pop")
		{
			if (q.size() == 0)
				cout << "-1" << "\n";
			else
			{
				cout << q.front() << "\n";
				q.pop();
			}
		}
		else if (command == "size")
			cout << q.size() << "\n";
		else if (command == "empty")
		{
			if (q.size() == 0)
				cout << "1" << "\n";
			else
				cout << "0" << "\n";
		}
		else if (command == "front")
		{
			if (q.size() == 0)
				cout << "-1" << "\n";
			else
				cout << q.front() << "\n";
		}
		else if (command == "back")
		{
			if (q.size() == 0)
				cout << "-1" << "\n";
			else
				cout << q.back() << "\n";
		}
	}
}
*/