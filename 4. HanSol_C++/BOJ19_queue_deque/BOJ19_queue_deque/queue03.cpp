//���� 11866�� �似Ǫ�� ���� 0
/*���� ����� �ƴϸ� �ڷ� ������

�ڷ� ������ �κ��� for������ ������ k - 1�� �����ؾ���*/

/*
#include <iostream>
#include <queue>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, k;
	cin >> n >> k;

	//ť ����
	queue<int> q;

	for (int i = 1; i <= n; i++)
	{
		q.push(i);
	}

	//�ڷ� ���� ��
	int b;
	//���ŵ� ��
	queue<int> r_q;

	//�似Ǫ��
	while (!q.empty())
	{
		for (int i = 0; i < k - 1; i++)
		{
			b = q.front();
			q.pop();
			q.push(b);
		}
		r_q.push(q.front());
		q.pop();
	}

	cout << "<";
	//�� for��
	for (int i = 0; i < n - 1; i++)
	{
		cout << r_q.front() << ", ";
		r_q.pop();
	}
	cout << r_q.front() << ">" << "\n";
}
*/