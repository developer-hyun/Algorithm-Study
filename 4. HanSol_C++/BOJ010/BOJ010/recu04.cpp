//���� 11729�� �ϳ��� ž �̵� ����
/*����Ʈ����: a�� 2������ a << 1*/


#include <iostream>
#include <string>

using namespace std;

void hanoi(int n, int from, int to, int pass)
{
	if (n == 1)
		cout << from << " " << to << "\n";
	else
	{
		//n-1���� ������ 3���� ���� 2������ ������.
		hanoi(n - 1, from, pass, to);
		//������ ���
		cout << from << " " << to << "\n";
		//n-1���� ������ 1�� ������ ���� 3������ ������.
		hanoi(n - 1, pass, to, from);
	}
}

int main()
{
	int num;
	cin >> num;
	//2�� N����: 1<<num
	cout << (1 << num) - 1 << "\n";
	//��� 1 3 2 ǥ��
	hanoi(num, 1, 3, 2);
}

/*
int count; //��� ���ư����� ����

int hanoi(int n)
{
	int bottom[3]; //�ٴ� ��� 3��

	for (int i = 0; i < n; i++)
	{
		bottom[0] = to_string(i);
	}

	bottom[0] = 

	if (bottom)
	{

	}

	cout << hanoi(n) << "\n";
}

int main()
{
	int N; //���� ����
	cin >> N;
}
*/