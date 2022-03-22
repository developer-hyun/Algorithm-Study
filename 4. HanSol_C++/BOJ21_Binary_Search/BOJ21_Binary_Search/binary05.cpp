//백준 2110번 공유기 설치
/*
기준점을 무엇으로 잡아야하는지 생각해야하고 설치하는 것도 생각해야함.
*/

#include <iostream>
#include <algorithm> //sort
#include <vector>

using namespace std;

int n, c;
//int arr[10001];
vector<int> v(n);

void binary_search() {
	//1부터 802

	//거리 간격 0 ~ 8
	long long left = 0;
	long long right = v[n - 1] - 1;

	long long target = 0;

	long long result = 0;

	while (left <= right) {

		//간격
		long long mid = (left + right) / 2;

		target = 1; //설치한 공유기 개수, 최대로 할려면 첫번째 공유기는 설치하고 시작

		//첫번째 공유기 위치
		int start = v[0];

		//간격 확인, 넘으면 공유기 설치
		for (int i = 0; i < n; i++) {
			
			//하나씩 확인
			int end = v[i];

			if (end - start >= mid)
			{
				target++;
				start = end;
			}
				
		}

		//더 많이 설치했으면 left를 늘려야함
		if (target >= c) {
			left = mid + 1;
			result = mid;
		}
		else {
			right = mid - 1;
		}
	}

	cout << result << "\n";
	return;
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

	cin >> n >> c;

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}

	sort(v.begin(), v.end());

	binary_search();
}