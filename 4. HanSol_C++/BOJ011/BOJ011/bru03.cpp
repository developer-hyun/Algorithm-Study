//���� 7568�� ��ġ
/*
������, Ű �� ũ�� ��ġ ŭ
�����Դ� ū�� Ű�� �۰ų� �� �ݴ�� �񱳺Ұ�(����)

Point: ��ġ ū ��� �� + 1, �ΰ��� ��

���� Ǭ ���: ABCD�� ����� �ִٸ� �λ���� ��� ����

for_each���� �߰��� �ߴ� �Ұ�
*/

/*
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int N; //��ü ����� ��
	cin >> N;

	//int* x = new int[N]; //�����Ҵ�

	vector<int> x(N); //������
	vector<int> y(N); //Ű

	//x������ yŰ �Է�
	for (int i = 0; i < N; i++)
	{
		cin >> x[i] >> y[i];
	}

	int count = 0; //��ġ ū ��� ��
	vector<int> result; //���

	//�ΰ��� ��
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			//��ġ ū ���
			if (x[i] < x[j] && y[i] < y[j] && i != j)
			{
				//cout << i << " ��° "<< j << " �ݺ�\n";
				count++; //���� ����
			}
		}

		//����� ���� ��ġ�� ����
		result.push_back(count + 1);
		count = 0; //�ʱ�ȭ
	}

	for (int i = 0; i < N; i++)
	{
		cout << result[i] << " ";
	}

	return 0;
}
*/