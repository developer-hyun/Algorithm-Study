//백준 10828번 스택
/*스택: 후입선출(LIFO), 가장 늦게 넣은 데이터가 가장 빨리 나가는 것, 역순 문자열
큐: 선입선출(FIFO), 가장 빨리 넣은 데이터가 가장 빨리 나가는 것
LIFO -> last in first out

c++은 따로 split 함수가 없음
stringstream: 문자열에서 내가 원하는 자료형의 데이터를 추출할 때 사용

검토 시간이 오래걸렸음*/

/*
#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;

	//스택 생성
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