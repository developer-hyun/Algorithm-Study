//백준 1931번 회의실 배정

/*최대 회의의 개수를 구해야 하므로 위에서 부터 시간이 이어지는 것을 찾으면 된다.
(1, 4) (5, 7) (8, 11) (12, 14)
시작시간 끝나는시간이 같은 것도 고려해야됨
14 44 34 79 11 13*/

/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<pair<int, int>> v;

	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		v.push_back(make_pair(b, a));
	}

	sort(v.begin(), v.end());

	int count = 0;
	int save = 0;

	for (int i = 0; i < n; i++)
	{
		if (save <= v[i].second)
		{
			save = v[i].first;
			count++;
		}
	}

	cout << count << "\n";
}
*/