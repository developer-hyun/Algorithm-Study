//���� 11047�� ���� 0

/*�׸���� ���� ���տ� ���̴� ������ ��Ȳ���� �Ѿ� 
�������� �ش信 �����ϴ� ����̹Ƿ� 
�� ���������� ���������� �ʿ��� ���� ������ �ּڰ��� ���ϴ� ���̹Ƿ�
K�� ����� ���� ������ ���� �ľ��ؾ� �Ѵ�.*/

/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void Coin(int kind, int total, vector<int> vec, int count, int remainder)
{

	for (int i = 0; i < kind; i++)
	{
		if (total >= vec[i])
		{
			count = count + total / vec[i];
			remainder = total % vec[i];

			if (remainder != 0)
			{
				return Coin(kind, remainder, vec, count, remainder);
			}
			else
			{
				cout << count << "\n";
				break;
			}
		}
	}
}

int main()
{
	int n, k;
	cin >> n >> k;

	//���� ����
	vector<int> v(n);

	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	//��������
	sort(v.rbegin(), v.rend());

	//k�� n ��
	int count = 0; //���� ����
	int remainder = 0; //������

	Coin(n, k, v, count, remainder);
}
*/