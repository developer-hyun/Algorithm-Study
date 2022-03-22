//���� 1654�� ���� �ڸ���
/*
�������� n������ ���� ����� �͵� n���� ����� �Ϳ� �����Ѵٰ� �����Ƿ�
������ �ùٸ��� ���� ������ ������� mid(���� ��)�� �����ؾ� �Ѵ�.

�ݷ�
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
	//1���� 802
	
	long long left = 1;
	long long right = v[k -1];
	long long target = 0;

	long long result = 0;

	while (left <= right) {
		long long mid = (left + right) / 2;

		target = 0;

		//cout << "mid ó��!: " << mid << "\n\n";

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

		//cout << "mid �߰�����!: " << mid << "\n\n";
		//cout << "result �߰�����!: " << result << "\n\n";
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