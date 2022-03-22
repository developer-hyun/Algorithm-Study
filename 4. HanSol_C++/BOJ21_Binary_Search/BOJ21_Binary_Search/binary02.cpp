//���� 10816�� ����ī�� 2
/*���� Ž�� O(log N)

�ߺ� ���Ұ� �����Ƿ� �ߺ��� ���� ������ �ε������� ���ؼ� 
������ - ���� �ε����� ���ϸ� ������ ���´�.*/

#include <iostream>
#include <algorithm> //sort

using namespace std;

int n, m;
int arr[500001];

//���� �ε��� ��
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

//���� �ε����� ������ ��
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