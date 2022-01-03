//백준 4153번 직각삼각형
/*정렬하고 피타고라스 정리*/

/*
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int w[3];

	while (true)
	{
		for (int i = 0; i < 3; i++)
		{
			cin >> w[i];
		}

		sort(w, w + 3);

		if (w[0] == 0 && w[1] == 0 && w[2] == 0)
			break;

		if ((w[0] * w[0]) + (w[1] * w[1]) == (w[2] * w[2]))
		{
			cout << "right\n";
		}
		else
			cout << "wrong\n";
	}
}
*/