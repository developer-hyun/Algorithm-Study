//백준 2108번 통계학
/*
시간초과...
*/

/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N; //수의 개수
	cin >> N;

	int num = 0;
	vector<int> a; //정수
	for (int i = 0; i < N; i++){
		cin >> num;
		a.push_back(num);
	}

	//산술평균: N개의 수들의 합을 N으로 나눈 값
	//반올림을 생각해줘야함, floor(n+0.5)
	float sumS = 0;
	for (float b : a)
		sumS += b;
	cout << floor(sumS / N + 0.5) << "\n";

	//중앙값: N개의 수들을 증가하는 순서로 나열했을 경우 그 중앙에 위치하는 값
	sort(a.begin(), a.end());
	cout << a[N / 2] << "\n";

	//최빈값: N개의 수들 중 가장 많이 나타나는 값
	int count = 0;
	int maxc = 0;
	int indexc = -4000; //입력값은 절댓값 4000을 안넘으므로
	vector<int> c;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			//cout << "a[i] 값: " << a[i] << ", a[j] 값: " << a[j] << "\n";
			if (a[i] == a[j])
			{
				count++;
			}
		}

		if (c.empty())
		{
			maxc = count;
			indexc = a[i];
			c.push_back(a[i]);
		}
		else if (count > maxc && a[i] != indexc)
		{
			c.pop_back();
			maxc = count;
			indexc = a[i];
			c.push_back(a[i]);
		}
		else if (count == maxc && a[i] != indexc)
		{
			maxc = count;
			indexc = a[i];
			c.push_back(a[i]);
		}
		count = 0;
	}

	//최빈값이 여러개라면
	if (c.size() > 1)
	{
		sort(c.begin(), c.end());
		cout << c[1] << "\n";
	}
	else
		cout << indexc << "\n";
	
	//범위: N개의 수들 중 최댓값과 최솟값의 차이
	int maxa = *max_element(a.begin(), a.end());
	int mina = *min_element(a.begin(), a.end());
	cout << maxa - mina << "\n";

	return 0;
}
*/