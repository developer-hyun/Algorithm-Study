//���� 1427�� ��Ʈ�λ��̵�
/*
�־��� ���ڸ� �ϳ��� �и��ؼ� �����ϰ�
������ ���� ���������ؼ� ������־���.
*/

/*
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> a;

	//���ڸ����� �ϳ��� �и�
	while (n != 0)
	{
		a.push_back(n % 10);
		n /= 10;
	}

	//�������� ����, reverse�� ��밡��(�������� ����)
	sort(a.rbegin(), a.rend());

	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i];
	}

	return 0;
}
*/