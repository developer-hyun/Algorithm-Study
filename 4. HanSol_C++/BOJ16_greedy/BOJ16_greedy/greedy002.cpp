//���� 1931�� ȸ�ǽ� ����

/*�ִ� ȸ���� ������ ���ؾ� �ϹǷ� ������ ���� �ð��� �̾����� ���� ã���� �ȴ�.
(1, 4) (5, 7) (8, 11) (12, 14)
���۽ð� �����½ð��� ���� �͵� ����ؾߵ�
14 44 34 79 11 13*/

/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<pair<int, int>> v;

	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		v.push_back(make_pair(b, a));
	}

	sort(v.begin(), v.end());

	int count = 0;
	int save = 0;

	for (int i = 0; i < n; i++)
	{
		if (save <= v[i].second)
		{
			save = v[i].first;
			count++;
		}
	}

	cout << count << "\n";
}
*/