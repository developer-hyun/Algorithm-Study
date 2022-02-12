//백준 17298번 오큰수
/*Ai의 오른쪽에서 Ai보다 가장 큰 수
없으면 -1

이중 for문 -> 시간복잡도 O(N**2)
스택을 통한 풀이 -> 시간복잡도 O(N)*/

/*
#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int s[1000001]; //둘쨋줄 수열
	int save[1000001];
	stack<int> st; //결과 쌓기

	for (int i = 0; i < n; i++)
		cin >> s[i];

	//NGE
	//뒤부터 탐색
	for (int i = n - 1; i >= 0; i--)
	{
		while (!st.empty() && st.top() <= s[i])
			st.pop();

		if (st.empty())
			save[i] = -1;
		else
			save[i] = st.top();

		st.push(s[i]);
	}

	for (int i = 0; i < n; i++)
	{
		cout << save[i] << " ";
	}
}
*/