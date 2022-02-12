//백준 11866번 요세푸스 문제 0
/*제거 대상이 아니면 뒤로 보내기

뒤로 보내는 부분의 for문에서 범위를 k - 1로 지정해야함*/

/*
#include <iostream>
#include <queue>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, k;
	cin >> n >> k;

	//큐 생성
	queue<int> q;

	for (int i = 1; i <= n; i++)
	{
		q.push(i);
	}

	//뒤로 보낼 수
	int b;
	//제거된 수
	queue<int> r_q;

	//요세푸스
	while (!q.empty())
	{
		for (int i = 0; i < k - 1; i++)
		{
			b = q.front();
			q.pop();
			q.push(b);
		}
		r_q.push(q.front());
		q.pop();
	}

	cout << "<";
	//답 for문
	for (int i = 0; i < n - 1; i++)
	{
		cout << r_q.front() << ", ";
		r_q.pop();
	}
	cout << r_q.front() << ">" << "\n";
}
*/