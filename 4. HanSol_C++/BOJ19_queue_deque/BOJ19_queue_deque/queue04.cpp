//백준 1966번 프린터 큐
/*2차원 큐로 정렬을 해서 할려고 했더니 
큐의 방식으로 정렬이 된게 아니라 그냥 정렬만 됨(그래서 실패)

내림차순 정렬한 큐랑 2차원 큐를 비교해서 해야함*/

/*
#include <iostream>
#include <queue>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	int m1, m2;

	int importance;
	int count;

	for (int i = 0; i < n; i++)
	{
		count = 0; //초기화하고 시작
		cin >> m1 >> m2;

		priority_queue<int> pq; //중요도 내림차순
		queue<pair<int, int>> q; //위치, 중요도

		for (int j = 0; j < m1; j++)
		{
			cin >> importance;
			q.push({ j, importance });
			pq.push(importance);
		}

		while (!q.empty())
		{
			//위치, 중요도 저장 후 pop
			int location = q.front().first;
			int value = q.front().second;
			q.pop(); //비교해서 다르면 push 할려고

			//값 비교
			if (pq.top() == value)
			{
				pq.pop();
				++count;
				if (m2 == location)
				{
					cout << count << "\n";
					break;
				}
			}
			else
				q.push({ location, value });
		}
	}

	return 0;
}
*/