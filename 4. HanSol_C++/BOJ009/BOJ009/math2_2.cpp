//���� 2581�� �Ҽ�
/*�Ҽ� ã�� ����*/

/*
#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main()
{
	int M, N;
	cin >> M >> N;

	priority_queue<int, vector<int>, greater<int>> s; //ť ����
	int sum = 0; //��
	int min = 0; //�ּҰ�

	int b; //������
	int count = 0; //������ 0�� ����

	//M���� N ���� �Ҽ� ã��
	for (int i = M; i < N + 1; i++)
	{
		for (int j = 1; j < i + 1; j++)
		{
			b = i % j;

			if (b == 0)
			{
				count++;
			}
		}

		//������ 0�� ������ 2�̸� �Ҽ�
		if (count == 2)
		{
			s.push(i);
		}

		count = 0; //�ʱ�ȭ
	}

	//���
	//�Ҽ��� ���ٸ� -1 ��ȯ
	if (s.empty())
	{
		cout << "-1\n";
	}
	else
	{
		min = s.top();
		while (!s.empty())
		{
			sum = sum + s.top();
			s.pop();
		}
		cout << sum << "\n" << min << "\n";
	}

	return 0;
}
*/