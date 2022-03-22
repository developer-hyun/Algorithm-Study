//백준 10816번 숫자카드 2
/*분할 탐색 O(log N)

중복 원소가 있으므로 중복의 왼쪽 오른쪽 인덱스값을 구해서 
오른쪽 - 왼쪽 인덱스를 구하면 갯수가 나온다.*/

#include <iostream>
#include <algorithm> //sort

using namespace std;

int n, m;
int arr[500001];

//낮은 인덱스 값
int binary_search_lower(int target) {

	int left = 0;
	int right = n;
	int cnt = 0;

	while (left < right) {
		int mid = (left + right) / 2;

		if (arr[mid] >= target) {
			right = mid;
		}
		else {
			left = mid + 1;
		}
	}

	return left;
}

//높은 인덱스의 오른쪽 값
int binary_search_upper(int target) {

	int left = 0;
	int right = n;
	int cnt = 0;

	while (left < right) {
		int mid = (left + right) / 2;

		if (arr[mid] <= target) {
			left = mid + 1;
		}
		else {
			right = mid;
		}
	}

	return left;
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

	cin >> n;

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		arr[i] = a;
	}

	sort(arr, arr + n);

	cin >> m;

	for (int i = 0; i < m; i++)
	{
		int b;
		cin >> b;
		cout << binary_search_upper(b) - binary_search_lower(b) << " ";
	}
}