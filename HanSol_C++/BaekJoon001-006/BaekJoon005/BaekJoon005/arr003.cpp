//���� 2577�� ������ ����
	/*
#include <iostream>

using namespace std;

int main()
{
	//ios_base::sync_with_stdio(0);

	//int count[10] = {};
	//int a, b, c;

	//cin >> a >> b >> c;

	//int res = a * b * c;


	//// ���� ���� 0�� �� �� ���� �ݺ�
	//while (res != 0) {
	//	count[res % 10]++;	// res���� ������ 10�� ���� �ڸ����� ��� �ε����� Ȱ��
	//	res /= 10;			//  �� ȸ �ڸ����� ���̱� ���� 10�� ������.
	//}

	//// 0 ���� 9���� count �迭�� ����Ѵ�. (foreach�� ���)
	//for (int v : count) {
	//	cout << v << "\n";
	//}
	//return 0;

	//�̰� ����
	int count[10] = {};
	int A, B, C;
	cin >> A >> B >> C;

	int M = A * B * C;

	while (M != 0)
	{
		count[M % 10]++;
		M = M / 10;
	}

	//���� �� �� �������� ���� ����ؾ���
	for (int num : count)
	{
		cout << num << "\n";
	}

	return 0;
}
*/