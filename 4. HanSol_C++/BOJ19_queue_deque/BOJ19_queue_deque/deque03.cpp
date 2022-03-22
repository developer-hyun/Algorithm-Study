//���� 5430�� AC
/*reverse�� vector�� ����ϸ� �������鼭 O(n)�� �ð����⵵�� �߻�*/


#include <iostream>
#include <deque>
#include <string>
#include <queue>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int t;
	cin >> t;

	while (t--)
	{
		string p;
		cin >> p;

		int n;
		cin >> n;

		string numArr;
		cin >> numArr;

		deque<int> dq;
		string tmp = "";

		//�迭 ���� ��󳻱�
		for (int i = 0; i < numArr.size(); i++)
		{
			if (numArr[i] == '[')
			{
				continue;
			}
			else if (numArr[i] >= '0' && numArr[i] <= '9')
			{
				tmp += numArr[i];
			}
			else if (numArr[i] == ',' || numArr[i] == ']')
			{
				if (!tmp.empty())
				{
					dq.push_back(stoi(tmp));
					tmp.clear();
				}
			}
		}

		//�������̸� �տ��� ���� �������̸� �ڿ��� ���� ����
		bool flag = true; //������ true
		bool isEmpty = false;
		for (int i = 0; i < p.size(); i++)
		{
			if (p[i] == 'R')
			{
				flag = !flag; //���� ����
			}
			else
			{
				if (!dq.empty())
				{
					if (flag)
					{
						dq.pop_front();
					}
					else
						dq.pop_back();
				}
				else
				{
					isEmpty = true;
					cout << "error\n";
					break;
				}
			}
		}

		if (!isEmpty)
		{
			cout << "[";
			if (flag)
			{
				while (!dq.empty())
				{
					cout << dq.front();
					dq.pop_front();
					if (!dq.empty())
						cout << ",";
				}
			}
			else
			{
				while (!dq.empty())
				{
					cout << dq.back();
					dq.pop_back();
					if (!dq.empty())
						cout << ",";
				}
			}
			cout << "]\n";
		}
	}

	//string p;

	////ť ����
	//deque<int> q;
	//priority_queue<int> pq;

	////�迭�� ����ִ� ��
	//string arr;
	//getline(cin, arr);
	////���ڸ� ����
	//for (int i = 0; arr[i] != '\0'; i++)
	//{
	//	if (48 <= arr[i] && arr[i] <= 57)
	//	{
	//		q.push_back(arr[i] - '0');
	//	}
	//}

	//for (int i = 0; i < t; i++)
	//{
	//	cin >> p;

	//	for (int j = 0; j < p.size(); j++)
	//	{

	//	}
	//}
}