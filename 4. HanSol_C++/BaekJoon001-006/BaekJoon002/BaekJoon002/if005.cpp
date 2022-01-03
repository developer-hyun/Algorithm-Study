//백준 2884번 알람 시계
#include <iostream>

using namespace std;

int main()
{
	int H, M;
	cin >> H >> M;

	M = M - 45;

	if (M < 0)
	{
		H = H - 1;
		if (H < 0)
		{
			H = 24 + H;
		}
		M = 60 - abs(M);
		cout << H << " " << M;
	}
	else
	{
		cout << H << " " << M;
	}

	return 0;
}