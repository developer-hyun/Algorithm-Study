//백준 11650번 좌표 정렬하기
/*
pair을 사용하는 방법을 썼다.
pair은 한줄을 한 객체로 본다.
입력받고 정렬하면 자동으로 정렬된다.
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
		v.push_back(make_pair(a, b));
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++)
	{
		cout << v[i].first << " " << v[i].second << "\n";
	}

	return 0;
}
*/