//���� 1966�� ������ ť
/*2���� ť�� ������ �ؼ� �ҷ��� �ߴ��� 
ť�� ������� ������ �Ȱ� �ƴ϶� �׳� ���ĸ� ��(�׷��� ����)

�������� ������ ť�� 2���� ť�� ���ؼ� �ؾ���*/

/*
#include <iostream>
#include <queue>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	int m1, m2;

	int importance;
	int count;

	for (int i = 0; i < n; i++)
	{
		count = 0; //�ʱ�ȭ�ϰ� ����
		cin >> m1 >> m2;

		priority_queue<int> pq; //�߿䵵 ��������
		queue<pair<int, int>> q; //��ġ, �߿䵵

		for (int j = 0; j < m1; j++)
		{
			cin >> importance;
			q.push({ j, importance });
			pq.push(importance);
		}

		while (!q.empty())
		{
			//��ġ, �߿䵵 ���� �� pop
			int location = q.front().first;
			int value = q.front().second;
			q.pop(); //���ؼ� �ٸ��� push �ҷ���

			//�� ��
			if (pq.top() == value)
			{
				pq.pop();
				++count;
				if (m2 == location)
				{
					cout << count << "\n";
					break;
				}
			}
			else
				q.push({ location, value });
		}
	}

	return 0;
}
*/