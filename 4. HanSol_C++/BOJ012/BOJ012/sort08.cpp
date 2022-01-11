//백준 1181번 단어 정렬
/*
단어를 받고 그 길이를 2차원으로 저장
단어 길이에 따른 오름차순 정렬
단어만 새로운 벡터에 저장
중복제거 후 출력
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

	vector<pair<int, string>> v; //key, value
	string a;
	int b = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> a;
		b = a.length(); //단어 길이
		v.push_back(make_pair(b, a)); //(단어 길이, 단어)
	}

	//단어 길이에 따른 오름차순 정렬
	sort(v.begin(), v.end());

	//단어들만 새로운 벡터값에 저장
	vector<string> r;
	for (int i = 0; i < n; i++)
	{
		r.push_back(v[i].second);
	}

	//중복제거
	r.erase(unique(r.begin(), r.end()), r.end());

	//r의 길이만큼 출력
	for (int i = 0; i < r.size(); i++)
	{
		cout << r[i] << "\n";
	}

	return 0;
}
*/