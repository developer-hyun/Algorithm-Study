//백준 10773번 제로
/*비어있으면 0, 아니면 총 합계
for문은 pop으로 인해 점점 줄기 때문에 복잡해짐
편하게 while(!stack.size()) 사용*/

/*
#include <iostream>
#include <stack>

using namespace std;

int main()
{
	int k;
	cin >> k;

	//스택 생성
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

	//다음은 사용할 수 없음
	//이유: size가 pop으로 인해 점점 줄기 때문에 그러므로 while 사용
	//for (int i = 1; i <= s.size() + 1; i++)
	//{
	//	int result = 0;
	//	result += s.top();
	//	s.pop();
	//}
}
*/