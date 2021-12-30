//백준 3009번 네 번째 점
/*직사각형으로 만들려면 x축, y축에 수가 2개씩 있어야하므로
그에 맞춰서 함수를 만들고 하나씩 구했다.*/


#include <iostream>
#include <algorithm>

using namespace std;

int ZaP(int a[3])
{
	if (a[0] == a[1])
	{
		if (a[0] != a[2])
			return a[2];
		else
			return a[0];
	}
	else if (a[0] != a[1])
	{
		if (a[1] == a[2])
			return a[0];
		else if (a[0] == a[2])
			return a[1];
	}
}

int main()
{
	int x[3];
	int y[3];

	int w, h; //네 번째 점의 좌표

	for (int i = 0; i < 3; i++)
	{
		cin >> x[i] >> y[i];
	}

	w = ZaP(x);
	h = ZaP(y);

	cout << w << " " << h << "\n";
}