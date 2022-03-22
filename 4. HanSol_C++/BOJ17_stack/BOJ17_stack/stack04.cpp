//백준 4949번 균형잡힌 세상
/*앞문제와 마찬가지로 스택이 비어있으면 오류가 나므로 주의

. 하나 있으면 바로 종료 조건 넣어줘야 함*/

/*
#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	//스택 생성
	stack<char> s;
	stack<char> s_r;

	string sentence;

	while (sentence != ".")
	{
		getline(cin, sentence);

		if (sentence.size() == 1)
		{
			break;
		}

		for (int i = 0; i < sentence.size(); i++)
		{
			if (sentence[i] == '(' || sentence[i] == ')' || sentence[i] == '[' || sentence[i] == ']')
			{
				s.push(sentence[i]);
			}
		}

		if (s.empty())
		{
			cout << "yes" << "\n";
		}
		else
		{
			s_r.push(s.top());
			s.pop();

			while (!s.empty())
			{
				if (s_r.empty())
				{
					s_r.push(s.top());
				}
				else if (s_r.top() == ')' && s.top() == '(')
				{
					s_r.pop();
				}
				else if (s_r.top() == ']' && s.top() == '[')
				{
					s_r.pop();
				}
				else
				{
					s_r.push(s.top());
				}

				s.pop();
			}

			if (s_r.empty())
				cout << "yes" << "\n";
			else
				cout << "no" << "\n";

			while (!s_r.empty())
				s_r.pop();
		}

	}
}
*/