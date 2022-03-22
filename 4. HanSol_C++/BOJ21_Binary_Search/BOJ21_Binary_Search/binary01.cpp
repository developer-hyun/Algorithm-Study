//���� 1920�� �� ã��
/*���� �ڷ� ����(����Ʈ, ���, ����, ť ��)���� �� ��ǥ���� �������
���� Ž��, �̺� Ž��, �ؽ��� �ִµ� �̺� Ž���� ���� Ž���� ���� �־��� ��쿡��
�ð����⵵�� �� ���� ���� ���Ǵ� Ž�� ���

�̺� Ž��: �̹� ���� �Ǿ��ִ� �迭���� Ž�� ������ �ݾ� �ٿ� ���� ã���� �ϴ�
���� ã�� Ž�� ����̴�.
���� �� �̺� Ž��*/

#include <iostream>
//#include <vector> //�ð��ʰ�
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