//���� 1181�� �ܾ� ����
/*
�ܾ �ް� �� ���̸� 2�������� ����
�ܾ� ���̿� ���� �������� ����
�ܾ ���ο� ���Ϳ� ����
�ߺ����� �� ���
*/

/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<pair<int, string>> v; //key, value
	string a;
	int b = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> a;
		b = a.length(); //�ܾ� ����
		v.push_back(make_pair(b, a)); //(�ܾ� ����, �ܾ�)
	}

	//�ܾ� ���̿� ���� �������� ����
	sort(v.begin(), v.end());

	//�ܾ�鸸 ���ο� ���Ͱ��� ����
	vector<string> r;
	for (int i = 0; i < n; i++)
	{
		r.push_back(v[i].second);
	}

	//�ߺ�����
	r.erase(unique(r.begin(), r.end()), r.end());

	//r�� ���̸�ŭ ���
	for (int i = 0; i < r.size(); i++)
	{
		cout << r[i] << "\n";
	}

	return 0;
}
*/