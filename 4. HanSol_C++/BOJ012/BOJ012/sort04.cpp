//���� 2108�� �����
/*
�ð��ʰ�...
*/

/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N; //���� ����
	cin >> N;

	int num = 0;
	vector<int> a; //����
	for (int i = 0; i < N; i++){
		cin >> num;
		a.push_back(num);
	}

	//������: N���� ������ ���� N���� ���� ��
	//�ݿø��� �����������, floor(n+0.5)
	float sumS = 0;
	for (float b : a)
		sumS += b;
	cout << floor(sumS / N + 0.5) << "\n";

	//�߾Ӱ�: N���� ������ �����ϴ� ������ �������� ��� �� �߾ӿ� ��ġ�ϴ� ��
	sort(a.begin(), a.end());
	cout << a[N / 2] << "\n";

	//�ֺ�: N���� ���� �� ���� ���� ��Ÿ���� ��
	int count = 0;
	int maxc = 0;
	int indexc = -4000; //�Է°��� ���� 4000�� �ȳ����Ƿ�
	vector<int> c;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			//cout << "a[i] ��: " << a[i] << ", a[j] ��: " << a[j] << "\n";
			if (a[i] == a[j])
			{
				count++;
			}
		}

		if (c.empty())
		{
			maxc = count;
			indexc = a[i];
			c.push_back(a[i]);
		}
		else if (count > maxc && a[i] != indexc)
		{
			c.pop_back();
			maxc = count;
			indexc = a[i];
			c.push_back(a[i]);
		}
		else if (count == maxc && a[i] != indexc)
		{
			maxc = count;
			indexc = a[i];
			c.push_back(a[i]);
		}
		count = 0;
	}

	//�ֺ��� ���������
	if (c.size() > 1)
	{
		sort(c.begin(), c.end());
		cout << c[1] << "\n";
	}
	else
		cout << indexc << "\n";
	
	//����: N���� ���� �� �ִ񰪰� �ּڰ��� ����
	int maxa = *max_element(a.begin(), a.end());
	int mina = *min_element(a.begin(), a.end());
	cout << maxa - mina << "\n";

	return 0;
}
*/