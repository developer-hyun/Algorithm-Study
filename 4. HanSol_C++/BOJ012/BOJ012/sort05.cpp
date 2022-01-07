//백준 1427번 소트인사이드
/*
주어진 숫자를 하나씩 분리해서 저장하고
저장한 것을 내림차순해서 출력해주었다.
*/

/*
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> a;

	//뒷자리부터 하나씩 분리
	while (n != 0)
	{
		a.push_back(n % 10);
		n /= 10;
	}

	//내림차순 정렬, reverse도 사용가능(오름차순 선행)
	sort(a.rbegin(), a.rend());

	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i];
	}

	return 0;
}
*/