//���� 2164�� ī��2
/*ť�� �ں��� ä������ ����*/

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

	//ť ����
	queue<int> q;

	//ī�� �迭
	for (int i = 1; i <= n; i++)
	{
		q.push(i);
	}

	//�ڷ� ���� ī��
	int b_card;

	//ī�� ������
	//ī�� �ڷ� ������
	while (q.size() != 1)
	{
		q.pop();
		b_card = q.front();
		q.pop();
		q.push(b_card);
	}

	cout << q.front() << "\n";
}
*/