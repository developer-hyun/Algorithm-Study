//백준 1002번 터렛
/*원의 내접, 외접*/


#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int T;
	cin >> T;

	int x1, y1, r1, x2, y2, r2;

	double w;

	for (int i = 0; i < T; i++)
	{
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		w = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

		//r1이 더 크도록 교환
		if (r1 < r2)
			swap(r1, r2);

		if (w == 0) //같은 점
		{
			if (r1 != r2) //반지름이 다르면
				cout << "0\n";
			else //반지름이 같으면
				cout << "-1\n";
		}
		else if (r1 + r2 > w && abs(r1 - r2) < w) //내접
		{
			cout << "2\n";
		}
		else if (r1 + r2 == w || abs(r1 - r2) == w) //외접
		{
			cout << "1\n";
		}
		else //떨어져있을때
		{
			cout << "0\n";
		}
	}
}
