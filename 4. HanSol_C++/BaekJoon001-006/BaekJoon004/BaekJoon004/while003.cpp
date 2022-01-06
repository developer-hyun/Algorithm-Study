//백준 1110번 더하기 사이클
	
#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	int M = N;

	int count = 0;

	while (true)
	{
		M = (M % 10) * 10 + ((M / 10) + (M % 10)) % 10;
		count += 1;
		if (M == N)
			break;
	}

	cout << count;

	return 0;
}