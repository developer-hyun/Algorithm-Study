//���� 9020�� �������� ����
/*�������� �����ɷȴµ� ���� ���� Ŭ���� ���̰� ���ٰ� �����ϸ�
���� ���� �������� ���ؼ� �Է°��� ���ָ� �ȴ�.*/

/*
#include <iostream>
#include <cmath>

using namespace std;

//�Ҽ��� 1
bool Sosu(int x)
{
	int n = 10000;
	int rt;

	rt = sqrt(x);	//��Ʈ i

		//2 �Ǵ� 3�̸� �Ҽ��ϱ� ���
	if (x == 2 || x == 3)
	{
		return true;
	}

	//i�� Ȧ���϶�
	if (x % 2)
	{
		//�����ٱ��� ������
		for (int j = 2; j <= rt; j++)
		{
			//������ �������� �Ҽ��� �ƴϹǷ� for�� ������
			if (!(x % j))
				return false;

			//������ ������ �������� �ʾ����� ���
			if (j == rt)
				return true;
		}
	}

	return false;
}

int main()
{
	int T;
	cin >> T;

	int num;
	int a = 0;
	int b = 0;

	for (int i = 0; i < T; i++)
	{
		cin >> num;

		for (int j = 2; j < num; j++)
		{
			//j�� �Ҽ����
			if (Sosu(j) == 1)
			{
				a = num - j; //�Ҽ��� �� ��

				//a�� �Ҽ��̰� j�� a���� Ŭ��(�ߺ�����)
				if (Sosu(a) == 1 && j <= a)
				{
					b = j;
				}
			}
			else
				continue;
		}
		cout << b << " " << num - b << "\n";
	}

}
*/