//���� 13305�� ������

/**/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> v1(n-1); //���� ����
	vector<int> v2(n); //���ʹ� ����

	for (int i = 0; i < n-1; i++)
	{
		cin >> v1[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> v2[i];
	}
}