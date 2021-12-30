//백준 11653번 소인수분해
/*N을 i로 나눈다
	나머지가 0이 나오면 i 출력 후 몫을 N에 저장
	0이 아니면 루프에서 나옴*/

	/*
#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	if (N == 1)
	{
		cout << "\n";
	}

	for (int i = 2; i < N + 1; i++)
	{
		while (N % i == 0)
		{
			cout << i << "\n";
			N = N / i;
		}
	}

	return 0;
}*/