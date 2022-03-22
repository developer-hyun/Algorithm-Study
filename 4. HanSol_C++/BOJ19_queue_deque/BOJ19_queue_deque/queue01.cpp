//백준 18258번 큐2
/*스택과 비슷하지만 앞 뒤로 push, pop 가능
시간복잡도: O(1), 특정데이터를 찾을때는 O(n)

cin, cout이 printf에 비해 느리므로 추가적으로 코드를 넣어줘야함*/

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

	//큐 생성
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