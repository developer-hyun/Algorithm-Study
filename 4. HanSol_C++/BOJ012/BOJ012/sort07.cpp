//백준 11651번 좌표 정렬하기 2
/*
y좌표를 기준으로 하니까 자리 바꿔서
정렬 후 출력해주었다.
*/

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
	int a, b;

	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		v.push_back(make_pair(b, a));
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++)
	{
		cout << v[i].second << " " << v[i].first << "\n";
	}

	return 0;
}
*/