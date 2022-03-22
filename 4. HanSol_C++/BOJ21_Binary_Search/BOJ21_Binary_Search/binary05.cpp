//���� 2110�� ������ ��ġ
/*
�������� �������� ��ƾ��ϴ��� �����ؾ��ϰ� ��ġ�ϴ� �͵� �����ؾ���.
*/

#include <iostream>
#include <algorithm> //sort
#include <vector>

using namespace std;

int n, c;
//int arr[10001];
vector<int> v(n);

void binary_search() {
	//1���� 802

	//�Ÿ� ���� 0 ~ 8
	long long left = 0;
	long long right = v[n - 1] - 1;

	long long target = 0;

	long long result = 0;

	while (left <= right) {

		//����
		long long mid = (left + right) / 2;

		target = 1; //��ġ�� ������ ����, �ִ�� �ҷ��� ù��° ������� ��ġ�ϰ� ����

		//ù��° ������ ��ġ
		int start = v[0];

		//���� Ȯ��, ������ ������ ��ġ
		for (int i = 0; i < n; i++) {
			
			//�ϳ��� Ȯ��
			int end = v[i];

			if (end - start >= mid)
			{
				target++;
				start = end;
			}
				
		}

		//�� ���� ��ġ������ left�� �÷�����
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