//���� 1085�� ���簢������ Ż��
/*w, h�� x, y���� ũ�ϱ� w = w - x, h = h - y �� ��ȯ
min�Լ��� ����ؼ� ���� ���� �� ���*/


#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int s[4];

	//x, y, w, h �Է�
	for (int i = 0; i < 4; i++)
	{
		cin >> s[i];
	}

	s[2] = s[2] - s[0]; //w = w - x
	s[3] = s[3] - s[1]; //h = h - y

	cout << min(min(s[0], s[1]), min(s[2], s[3])) << "\n";
}
