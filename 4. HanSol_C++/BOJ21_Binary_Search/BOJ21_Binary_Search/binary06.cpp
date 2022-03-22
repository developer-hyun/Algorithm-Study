//백준 1300번 K번째 수
/*

*/

#include <iostream>
#include <algorithm> //sort
#include <vector>

using namespace std;

int n, k;
vector<int> v;

void binary_search() {
	long long left = 1;
	long long right = n * n;

	long long target = 0;

	long long result = 0;

	while (left <= right) {

		long long mid = (left + right) / 2;

		target = 1;

		int start = v[0];

		for (int i = 0; i < n; i++) {

			int end = v[i];

			if (end - start >= mid)
			{
				target++;
				start = end;
			}

		}

		if (target >= k) {
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

	cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		v.push_back(i);
	}

	//sort(v.begin(), v.end());

	binary_search();
}