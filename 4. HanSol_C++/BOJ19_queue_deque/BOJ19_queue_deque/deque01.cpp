//백준 10866번 덱
/*queue가 아닌 deque 사용*/

/*
#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	//큐 생성
	deque<int> q;

	for (int i = 0; i <= n; i++)
	{
		string command;
		getline(cin, command);

		if (command.find("push_front") != string::npos)
		{
			int num_f = stoi(command.substr(11));
			q.push_front(num_f);
		}
		else if (command.find("push_back") != string::npos)
		{
			int num_b = stoi(command.substr(10));
			q.push_back(num_b);
		}
		else if (command == "pop_front")
		{
			if (q.size() == 0)
				cout << "-1" << "\n";
			else
			{
				cout << q.front() << "\n";
				q.pop_front();
			}
		}
		else if (command == "pop_back")
		{
			if (q.size() == 0)
				cout << "-1" << "\n";
			else
			{
				cout << q.back() << "\n";
				q.pop_back();
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