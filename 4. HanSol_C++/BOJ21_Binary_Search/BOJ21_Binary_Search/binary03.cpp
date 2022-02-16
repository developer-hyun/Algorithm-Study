//백준 1654번 랜선 자르기
/*
문제에서 n개보다 많이 만드는 것도 n개를 만드는 것에 포함한다고 했으므로
범위가 올바르지 않을 때까지 결과값에 mid(최종 값)을 저장해야 한다.

반례
2 3
3
2
*/

#include <iostream>
#include <algorithm> //sort
#include <vector>

using namespace std;

int k, n;
//int arr[10001];
vector<int> v(k);

void binary_search() {
	//1부터 802
	
	long long left = 1;
	long long right = v[k -1];
	long long target = 0;

	long long result = 0;

	while (left <= right) {
		long long mid = (left + right) / 2;

		target = 0;

		//cout << "mid 처음!: " << mid << "\n\n";

		for (int i = 0; i < k; i++) {
			target += v[i] / mid;
			//cout << "v[" << i << "] / mid: " << v[i] / mid << "\n";
			//cout << "target: " << target << "\n";
		}
		//cout << "------------------" << "\n\n";

		if (target >= n) {
			left = mid + 1;
			result = mid;
		}
		else {
			right = mid - 1;
		}

		//cout << "mid 중간점검!: " << mid << "\n\n";
		//cout << "result 중간점검!: " << result << "\n\n";
	}

	cout << result << "\n";
	return;
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

	cin >> k >> n;

	for (int i = 0; i < k; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}

	sort(v.begin(), v.end());

	binary_search();
}