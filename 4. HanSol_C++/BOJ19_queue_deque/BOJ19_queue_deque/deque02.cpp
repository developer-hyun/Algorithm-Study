//백준 1021번 회전하는 큐
/*인덱스 사용가능..*/

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

	//큐 생성
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
		//	cout << "인덱스: " << q[i] << "\n";
		//}

		for (int i = 0; i < q.size(); i++)
		{
			if (q[i] == pick)
			{
				index = i; //인덱스 찾기
				break;
			}
		}

		//cout << "index: " << index << ", q-i: " << q.size() - index << "\n";

		//좌로 갈지 우로 갈지, 작으면 왼쪽
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

		//cout << "중간 count: " << count << "\n";
	}

	cout << count << "\n";
}
*/