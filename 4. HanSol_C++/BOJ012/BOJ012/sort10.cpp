//���� 18870�� ��ǥ ����
/*
lower_bound: ����Ž��
�ߺ������ϰ� �������� �����ؼ� 0���� �ε������� ��
�׷��� �Է°��� ���ؼ� ������ �ش� �ε����� ���
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> a;
	vector<int> savea;
	int b;
	for (int i = 0; i < n; i++)
	{
		cin >> b;
		a.push_back(b);
	}
	savea = a; //�Է°� ����, default ��

	//a ���� �� �ߺ�����
	//-10 -9 2 4
	sort(a.begin(), a.end());
	a.erase(unique(a.begin(), a.end()), a.end());

	//�Է°��� �� ���� key������ ���ų� ū ���ڰ� �迭 �� ��°�� ó�� �����ϴ��� ã�� ����
	for (int p : savea)
	{
		int pos = lower_bound(a.begin(), a.end(), p) - a.begin();
		cout << pos << ' ';
	}

	////ũ�� ����
	//vector<pair<int, int>> v;

	//for (int i = 0; i < a.size(); i++)
	//{
	//	v.push_back(make_pair(a[i], i));
	//}

	//for (int i = 0; i < n; i++)
	//{
	//	for (int j = 0; j < v.size(); j++)
	//	{			
	//		if (savea[i] == v[j].first)
	//		{
	//			cout << v[j].second << ' ';
	//		}
	//	}
	//}

	return 0;
}
