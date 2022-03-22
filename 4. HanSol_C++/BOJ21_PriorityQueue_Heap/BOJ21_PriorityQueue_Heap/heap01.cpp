//백준 11279번 최대 힙
/*
우선순위 큐: 들어간 순서에 상관없이 우선순위가 높은 데이터가 먼저 나오는 것
힙이라는 자료구조를 가지고 구현할 수 있음

최대 힙: 올라갈수록 저장된 값이 커지는 구조, 우선순위 값이 큰 순서대로
최소 힙: 올라갈수록 저장된 값이 작아지는 구조, 우선순위 값이 작은 순서대로
*/

#include <iostream>
#include <queue>

using namespace std;

int main()
{
	int n;
	cin >> n;

	priority_queue<int> pq;

	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;

		//x가 자연수면 push(x)
		//x가 0이면 배열에서 가장 큰 값 출력 후 그 값 제거
		if (x > 0)
			pq.push(x);
		else {
			if (pq.empty()) {
				cout << "0" << "\n";
			}
			else {
				cout << pq.top() << "\n";
				pq.pop();
			}
		}
	}
}