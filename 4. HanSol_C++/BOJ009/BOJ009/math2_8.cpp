//���� 3009�� �� ��° ��
/*���簢������ ������� x��, y�࿡ ���� 2���� �־���ϹǷ�
�׿� ���缭 �Լ��� ����� �ϳ��� ���ߴ�.*/

/*
#include <iostream>
#include <algorithm>

using namespace std;

int ZaP(int a[3])
{
	if (a[0] == a[1])
	{
		if (a[0] != a[2])
			return a[2];
		else
			return a[0];
	}
	else if (a[0] != a[1])
	{
		if (a[1] == a[2])
			return a[0];
		else if (a[0] == a[2])
			return a[1];
	}
}

int main()
{
	int x[3];
	int y[3];

	int w, h; //�� ��° ���� ��ǥ

	for (int i = 0; i < 3; i++)
	{
		cin >> x[i] >> y[i];
	}

	w = ZaP(x);
	h = ZaP(y);

	cout << w << " " << h << "\n";
}
*/