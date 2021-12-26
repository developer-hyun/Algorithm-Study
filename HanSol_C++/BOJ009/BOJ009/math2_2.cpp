//백준 2581번 소수
/*소수 찾기 응용*/

/*
#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main()
{
	int M, N;
	cin >> M >> N;

	priority_queue<int, vector<int>, greater<int>> s; //큐 생성
	int sum = 0; //합
	int min = 0; //최소값

	int b; //나머지
	int count = 0; //나머지 0인 개수

	//M부터 N 사이 소수 찾기
	for (int i = M; i < N + 1; i++)
	{
		for (int j = 1; j < i + 1; j++)
		{
			b = i % j;

			if (b == 0)
			{
				count++;
			}
		}

		//나머지 0인 개수가 2이면 소수
		if (count == 2)
		{
			s.push(i);
		}

		count = 0; //초기화
	}

	//결과
	//소수가 없다면 -1 반환
	if (s.empty())
	{
		cout << "-1\n";
	}
	else
	{
		min = s.top();
		while (!s.empty())
		{
			sum = sum + s.top();
			s.pop();
		}
		cout << sum << "\n" << min << "\n";
	}

	return 0;
}
*/