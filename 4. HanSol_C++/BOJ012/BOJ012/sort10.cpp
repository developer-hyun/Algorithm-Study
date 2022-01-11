//백준 18870번 좌표 압축
/*
lower_bound: 이진탐색
중복제거하고 오름차순 정렬해서 0부터 인덱스값을 줌
그래서 입력값과 비교해서 같으면 해당 인덱스값 출력
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> a;
	vector<int> savea;
	int b;
	for (int i = 0; i < n; i++)
	{
		cin >> b;
		a.push_back(b);
	}
	savea = a; //입력값 저장, default 값

	//a 정렬 후 중복제거
	//-10 -9 2 4
	sort(a.begin(), a.end());
	a.erase(unique(a.begin(), a.end()), a.end());

	//입력값을 돌 동안 key값보다 같거나 큰 숫자가 배열 몇 번째에 처음 등장하는지 찾기 위함
	for (int p : savea)
	{
		int pos = lower_bound(a.begin(), a.end(), p) - a.begin();
		cout << pos << ' ';
	}

	////크기 순서
	//vector<pair<int, int>> v;

	//for (int i = 0; i < a.size(); i++)
	//{
	//	v.push_back(make_pair(a[i], i));
	//}

	//for (int i = 0; i < n; i++)
	//{
	//	for (int j = 0; j < v.size(); j++)
	//	{			
	//		if (savea[i] == v[j].first)
	//		{
	//			cout << v[j].second << ' ';
	//		}
	//	}
	//}

	return 0;
}
