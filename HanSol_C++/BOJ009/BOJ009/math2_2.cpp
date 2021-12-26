//백준 2581번 소수
/**/

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int M, N;
	cin >> M >> N;

	string s;

	//소수찾기

	int b; //나머지
	int count = 0; //나머지 0인 개수
	int result = 0;

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
			s = to_string(i);
		}

		count = 0; //초기화
	}

	cout << s << "\n";

	return 0;
}
