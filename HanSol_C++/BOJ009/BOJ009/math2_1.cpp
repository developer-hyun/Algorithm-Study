//백준 1978번 소수 찾기
/*소수 -> 1과 자기자신, 1은 소수가 아님*/

/*
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N; //개수
	int sosu[101]; //주어진 소수, 개수는 100이하
	cin >> N;

	int b; //나머지
	int count = 0; //나머지 0인 것 저장
	int result = 0;

	for (int i = 0; i < N; i++)
	{
		cin >> sosu[i];
		for (int j = 1; j < sosu[i] + 1; j++)
		{
			b = sosu[i] % j;

			//나머지가 0이라면
			if (b == 0)
			{
				count++;
			}
		}

		//나머지가 2이면 소수
		if (count == 2)
		{
			result++;
		}

		count = 0; //초기화
	}

	cout << result << "\n";

	return 0;
}
*/