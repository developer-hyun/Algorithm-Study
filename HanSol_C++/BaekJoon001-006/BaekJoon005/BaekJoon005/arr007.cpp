//���� 4344�� ����� �Ѱ���
	
#include <iostream>

using namespace std;

int main()
{
	int C, N;//�׽�Ʈ ���̽�, �л� ��
	int count, arg; //��� �Ѵ� �ֵ� ��, ���
	int score[1000] = {}; //N���� �л� ����
	double total;

	cin >> C;

	for (int i = 0; i < C; i++)
	{
		arg = 0;
		count = 0;
		cin >> N;

		for (int j = 0; j < N; j++)
		{
			cin >> score[j];
			//cout << "����: " << score[j] << "\n";
			arg += score[j];
			//cout << "���� �հ�: " << sum << "\n";
		}

		arg = arg / N; // ���
		//cout << "���: " << arg << "\n";
		for (int j = 0; j < N; j++)
		{
			if (arg < score[j])
			{
				count++;
			}
		}
		total = (double)count / N * 100;
		cout << fixed;
		cout.precision(3);
		cout << total << "%\n";

	}

	return 0;
}