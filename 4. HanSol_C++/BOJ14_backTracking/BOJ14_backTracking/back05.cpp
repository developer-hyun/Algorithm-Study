//���� 9663�� N-Queen
/*
��� ���� ��ġ�� �ʴ´�.
1���� �迭�� ��������
���� �ε���, ���� ��
*/

/*
#include <iostream>
#define MAX 15
using namespace std;

int n;
int arr[MAX];
int cnt = 0;

//�� �̵� üũ
bool check(int c)
{
	for (int i = 0; i < c; i++)
	{
		//���� ���̰ų� ��-��, ��-���� ���� ���� ��ġ �Ұ�
		if (arr[i] == arr[c] || abs(arr[c] - arr[i]) == c - i)
			return false;
	}
	return true;
}

void queen(int q)
{
	//���� �� ��ġ�Ǹ� ī��Ʈ
	if (q == n)
	{
		cnt++;
		return;
	}

	//ü����
	for (int i = 0; i < n; i++)
	{
		arr[q] = i;
		if (check(q))
			queen(q + 1);
	}
}

int main() {
    cin >> n;
    queen(0);

	cout << cnt << "\n";
}
*/

//2���� ����� ��
//int arr[MAX][MAX]{}; //0���� �ʱ�ȭ
/*for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] == 0)
			{
				arr[i][j] += 1;
			}
			queen(q + 1);
		}
	}*/