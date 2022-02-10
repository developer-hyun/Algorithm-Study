//백준 11399번 ATM

/*정리해보면 걸리는 시간이 작은 것부터 오름차순 정렬 한 후 출력
첫번째 수는 n 곱하고 그 다음 수는 n-1 ... 이런식으로 해서 다 더해주면 된다.*/

/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<pair<int,int>> v(n);

	for (int i = 0; i < n; i++)
	{
		cin >> v[i].first;
		v[i].second = i;
	}

	sort(v.begin(), v.end());

	int total = 0;
	int num = 0;
	for (int i = 0; i < n; i++)
	{
		num = n - i;
		total += v[i].first * num;
	}

	cout << total << "\n";
}
*/