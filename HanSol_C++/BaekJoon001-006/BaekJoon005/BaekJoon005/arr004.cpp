//백준 3052번 나머지
	/*
#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int num;
	int rest[42] = {};
	for (int i = 0; i < 10; i++)
	{
		cin >> num;
		rest[num % 42]++;
	}

	int count = 0;
	for (int v : rest)
	{
		if (v > 0)
		{
			count++;
		}
	}

	cout << count;

	return 0;
}*/