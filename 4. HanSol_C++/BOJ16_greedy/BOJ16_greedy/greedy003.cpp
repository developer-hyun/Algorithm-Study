//���� 11399�� ATM

/*�����غ��� �ɸ��� �ð��� ���� �ͺ��� �������� ���� �� �� ���
ù��° ���� n ���ϰ� �� ���� ���� n-1 ... �̷������� �ؼ� �� �����ָ� �ȴ�.*/

/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<pair<int,int>> v(n);

	for (int i = 0; i < n; i++)
	{
		cin >> v[i].first;
		v[i].second = i;
	}

	sort(v.begin(), v.end());

	int total = 0;
	int num = 0;
	for (int i = 0; i < n; i++)
	{
		num = n - i;
		total += v[i].first * num;
	}

	cout << total << "\n";
}
*/