//���� 11279�� �ִ� ��
/*
�켱���� ť: �� ������ ������� �켱������ ���� �����Ͱ� ���� ������ ��
���̶�� �ڷᱸ���� ������ ������ �� ����

�ִ� ��: �ö󰥼��� ����� ���� Ŀ���� ����, �켱���� ���� ū �������
�ּ� ��: �ö󰥼��� ����� ���� �۾����� ����, �켱���� ���� ���� �������
*/

#include <iostream>
#include <queue>

using namespace std;

int main()
{
	int n;
	cin >> n;

	priority_queue<int> pq;

	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;

		//x�� �ڿ����� push(x)
		//x�� 0�̸� �迭���� ���� ū �� ��� �� �� �� ����
		if (x > 0)
			pq.push(x);
		else {
			if (pq.empty()) {
				cout << "0" << "\n";
			}
			else {
				cout << pq.top() << "\n";
				pq.pop();
			}
		}
	}
}