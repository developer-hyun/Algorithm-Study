//���� 1002�� �ͷ�
/*���� ����, ����*/


#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int T;
	cin >> T;

	int x1, y1, r1, x2, y2, r2;

	double w;

	for (int i = 0; i < T; i++)
	{
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		w = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

		//r1�� �� ũ���� ��ȯ
		if (r1 < r2)
			swap(r1, r2);

		if (w == 0) //���� ��
		{
			if (r1 != r2) //�������� �ٸ���
				cout << "0\n";
			else //�������� ������
				cout << "-1\n";
		}
		else if (r1 + r2 > w && abs(r1 - r2) < w) //����
		{
			cout << "2\n";
		}
		else if (r1 + r2 == w || abs(r1 - r2) == w) //����
		{
			cout << "1\n";
		}
		else //������������
		{
			cout << "0\n";
		}
	}
}
