//백준 2805번 나무 자르기
/*
랜선자르기랑 똑같은데 음수일 경우 생각해주기
*/

#include <iostream>
#include <algorithm> //sort
#include <vector>

using namespace std;

int n, m;
//int arr[10001];
vector<int> v(n);

void binary_search() {
	//1부터 802

	long long left = 1;
	long long right = v[n - 1];
	long long target = 0;

	long long result = 0;

	while (left <= right) {
		long long mid = (left + right) / 2;

		target = 0;

		for (int i = 0; i < n; i++) {
			if (v[i] - mid < 0)
				continue;
			else
				target += v[i] - mid;
		}

		if (target >= m) {
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

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}

	sort(v.begin(), v.end());

	binary_search();
}