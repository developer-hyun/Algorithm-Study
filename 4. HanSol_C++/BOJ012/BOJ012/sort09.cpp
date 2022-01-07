//백준 10814번 나이순 정렬
/*
sort는 어떤 인덱스가 앞에 올지 예상할 수 없고
stable_sort는 조건이 같다면 정렬 순서를 유지한다.
*/

/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool compare(pair<int, string>a, pair<int, string>b)
{
	return a.first < b.first;
}

int main()
{
	int n;
	cin >> n;

	vector<pair<int, string>> v;
	int a;
	string b;

	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		v.push_back(make_pair(a, b));
	}

	stable_sort(v.begin(), v.end(), compare);

	for (int i = 0; i < n; i++)
	{
		cout << v[i].first << " " << v[i].second << "\n";
	}

	return 0;
}
*/