//���� 4948�� ����Ʈ�� ����
/*1929�� �Ҽ� ���ϱ⸦ �̿��ϸ� ���� Ǯ����.
�ٷ� ������� �ʰ� �Ҽ��� ������ ���� ����ϸ� �ȴ�.*/

/*
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n = -1;
	int rt;
	int count = 0;

	while (true)
	{
		cin >> n;

		if (n == 0)
			break;

		for (int i = n + 1; i <= 2 * n; i++)
		{
			rt = sqrt(i);
			if (i == 2 || i == 3)
			{
				count++;
				continue;
			}

			//i�� Ȧ���϶�
			if (i % 2)
			{
				//�����ٱ��� ������
				for (int j = 2; j <= rt; j++)
				{
					//������ �������� �Ҽ��� �ƴϹǷ� for�� ������
					if (!(i % j))
						break;

					//������ ������ �������� �ʾ����� ���
					if (j == rt)
					{
						count++;
					}
				}
			}
			
		}
		cout << count << "\n";
		count = 0;
	}
}
*/