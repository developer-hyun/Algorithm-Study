//백준 2164번 카드2
/*큐는 뒤부터 채워지는 형태*/

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

	//큐 생성
	queue<int> q;

	//카드 배열
	for (int i = 1; i <= n; i++)
	{
		q.push(i);
	}

	//뒤로 보낼 카드
	int b_card;

	//카드 버리기
	//카드 뒤로 보내기
	while (q.size() != 1)
	{
		q.pop();
		b_card = q.front();
		q.pop();
		q.push(b_card);
	}

	cout << q.front() << "\n";
}
*/