//���� 2775�� �γ�ȸ���� ���׾�
/*k���� nȣ�� k-1���� nȣ�� k���� n-1ȣ�� �հ� ����.*/

    /*
#include <iostream>

using namespace std;

int T;
int arr[15][15];

int main() 
{
    cin >> T;

	//�ʱ�ȭ
	for (int i = 0; i < 15; i++)
	{
		arr[0][i] = i;
	}

	//�ٷ� �Ʒ��� ���
	for (int i = 1; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			for (int k = 0; k <= j; k++)
			{
				arr[i][j] += arr[i - 1][k];
			}
		}
	}

	while (T--)
	{
		int K, N;
		cin >> K >> N;
		cout << arr[K][N] << "\n";
	}
}
*/