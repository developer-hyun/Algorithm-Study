//���� 10989�� �� �����ϱ� 3
/*
�������(O(N+K)): ������ ������ ���ִ� �迭�� �����ϰ� �־��� �迭�� ����
���ο� �迭�� �ε��� ���� ã�Ƽ� ī��Ʈ���ش�. �׸��� �� �պ��� �ε�����
������ŭ ����ϸ� �ȴ�.

�����ϴ� ���� �˰��� �� ��� ���İ� ��� ������ ���� ������.

vector ���ϱ� �޸� �ʰ����. �׳� �迭�� �ؾ���.
*/

/*
#include <iostream>
//#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num; //���� ����
	cin >> num;

	int a[10001] = {0,}; //���� ����
	int n;

	for (int i = 0; i < num; i++)
	{
		cin >> n; //�� �Է�
		a[n] += 1; //�ش� �ε������� +1
	}

	for (int i = 0; i < 10001; i++)
	{
		for (int j = 0; j < a[i]; j++)
		{
			cout << i << "\n";
		}
	}

	//ios::sync_with_stdio(false);
	//cin.tie(NULL);
	//cout.tie(NULL);

	//int num; //���� ����
	//cin >> num;

	//vector<int> a(num, 0);
	//int n;
	//for (int i = 0; i < num; i++)
	//{
	//	cin >> n;
	//	a[n] += 1;
	//}
	//for (int i = 0; i < num; i++)
	//{
	//	for (int j = 0; j < a[i]; j++)
	//	{
	//		cout << i << '\n';
	//	}
	//}

	//int n; //�޴� ��
	//vector<int> a; //�־��� �迭
	//vector<int> b(num, 0); //ī��Ʈ �迭, numũ�⸸ŭ ���� �� 0���� �ʱ�ȭ

	//for (int i = 0; i < num; i++){
	//	cin >> n;
	//	a.push_back(n);
	//}

	//for (int i = 0; i < num; i++)
	//{
	//	b[a[i]] += 1;
	//}

	//for (int i = 0; i < num; i++)
	//{
	//	for (int j = 0; j < b[i]; j++)
	//	{
	//		cout << i << '\n';
	//	}
	//}

	return 0;
}
*/