//백준 1920번 수 찾기
/*선형 자료 구조(리스트, 어레이, 스택, 큐 등)에서 의 태표적인 방법으로
선형 탐색, 이분 탐색, 해싱이 있는데 이분 탐색은 선형 탐색에 비해 최악의 경우에도
시간복잡도가 더 좋아 자주 사용되는 탐색 방법

이분 탐색: 이미 정렬 되어있는 배열에서 탐색 범위를 반씩 줄여 가며 찾고자 하는
값을 찾는 탐색 방법이다.
정렬 후 이분 탐색*/

#include <iostream>
//#include <vector> //시간초과
#include <algorithm> //sort

using namespace std;

int n, m;
int arr[100001];

void binary_search(int target) {

	int left = 0;
	int right = n - 1;

	while (left <= right) {
		int mid = (left + right) / 2;

		if (arr[mid] == target) {
			cout << "1" << "\n";
			return;
		}
		else if (arr[mid] > target) {
			right = mid - 1;
		}
		else if (arr[mid] < target) {
			left = mid + 1;
		}
	}

	cout << "0" << "\n";
	return;
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

	for (int i = 0; i < m; i++) {
		int b;
		cin >> b;
		binary_search(b);
	}
}