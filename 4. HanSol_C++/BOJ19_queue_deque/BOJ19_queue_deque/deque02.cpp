//���� 1021�� ȸ���ϴ� ť
/*�ε��� ��밡��..*/

/*
#include <iostream>
#include <deque>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	//ť ����
	deque<int> q;

	int pick;
	int index;
	int count = 0;

	for (int i = 1; i <= n; i++)
	{
		q.push_back(i);
	}

	while (m--)
	{
		cin >> pick;

		//for (int i = 0; i < q.size(); i++)
		//{
		//	cout << "�ε���: " << q[i] << "\n";
		//}

		for (int i = 0; i < q.size(); i++)
		{
			if (q[i] == pick)
			{
				index = i; //�ε��� ã��
				break;
			}
		}

		//cout << "index: " << index << ", q-i: " << q.size() - index << "\n";

		//�·� ���� ��� ����, ������ ����
		if (index < q.size() - index)
		{
			while (true)
			{
				if (q.front() == pick)
				{
					q.pop_front();
					break;
				}

				q.push_back(q.front());
				q.pop_front();
				count++;
			}
		}
		else
		{
			while (true)
			{
				if (q.front() == pick)
				{
					q.pop_front();
					break;
				}

				q.push_front(q.back());
				q.pop_back();
				count++;
			}
		}

		//cout << "�߰� count: " << count << "\n";
	}

	cout << count << "\n";
}
*/