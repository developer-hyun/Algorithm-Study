//���� 1978�� �Ҽ� ã��
/*�Ҽ� -> 1�� �ڱ��ڽ�, 1�� �Ҽ��� �ƴ�*/

/*
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N; //����
	int sosu[101]; //�־��� �Ҽ�, ������ 100����
	cin >> N;

	int b; //������
	int count = 0; //������ 0�� �� ����
	int result = 0;

	for (int i = 0; i < N; i++)
	{
		cin >> sosu[i];
		for (int j = 1; j < sosu[i] + 1; j++)
		{
			b = sosu[i] % j;

			//�������� 0�̶��
			if (b == 0)
			{
				count++;
			}
		}

		//�������� 2�̸� �Ҽ�
		if (count == 2)
		{
			result++;
		}

		count = 0; //�ʱ�ȭ
	}

	cout << result << "\n";

	return 0;
}
*/