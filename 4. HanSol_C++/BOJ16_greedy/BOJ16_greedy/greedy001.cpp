//백준 11047번 동전 0

/*그리디는 당장 눈앞에 보이는 최적의 상황만을 쫓아 
최종적인 해답에 도달하는 방법이므로 
이 문제에서는 최종적으로 필요한 동전 개수의 최솟값을 구하는 것이므로
K와 가까운 동전 단위를 먼저 파악해야 한다.*/

/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void Coin(int kind, int total, vector<int> vec, int count, int remainder)
{

	for (int i = 0; i < kind; i++)
	{
		if (total >= vec[i])
		{
			count = count + total / vec[i];
			remainder = total % vec[i];

			if (remainder != 0)
			{
				return Coin(kind, remainder, vec, count, remainder);
			}
			else
			{
				cout << count << "\n";
				break;
			}
		}
	}
}

int main()
{
	int n, k;
	cin >> n >> k;

	//동전 단위
	vector<int> v(n);

	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	//내림차순
	sort(v.rbegin(), v.rend());

	//k와 n 비교
	int count = 0; //동전 개수
	int remainder = 0; //나머지

	Coin(n, k, v, count, remainder);
}
*/