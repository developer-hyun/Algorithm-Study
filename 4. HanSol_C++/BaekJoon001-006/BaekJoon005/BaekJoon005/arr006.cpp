//백준 8958번 OX퀴즈
	/*
#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int T;
	string s;

	cin >> T;

	for (int j = 0; j < T; j++)
	{
		cin >> s;
		int sum = 0;
		int cnt = 0;
		
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == 'O')
			{
				cnt++;
				sum += cnt;
			}
			else
			{
				cnt = 0;
			}
		}
		cout << sum << "\n";
	}

	return 0;
}*/