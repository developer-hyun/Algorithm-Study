//���� 2750�� �� �����ϱ�
/*
Point: vector�� ����� �Ͱ� sort�� ����Ѱ�
�ڷᱸ�� �˰��� �� �� C++ STL ���̺귯���� ���� ���
vector, deque, list�� ��ǥ��
vector�� deque�� �߰��� ���� ������ ������ ���
list�� �߰��� ���� ������ ���� �߻��Ҷ� ���

���� Ǭ ���: �ð����⵵�� O(N^2) ���� ���� O(nlogn)�̿��� ����
*/

/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int num; //���� ����
	cin >> num;

	int p; //�޾ƿ� ��
	vector<int> n; //���� ����
	
	for (int i = 0; i < num; i++)
	{
		cin >> p;
		n.push_back(p); //�ϳ��� �޴´�.
	}

	sort(n.begin(), n.end()); //����

	//���
	for (int i = 0; i < num; i++)
	{
		cout << n[i] << "\n";
	}

	return 0;
}
*/