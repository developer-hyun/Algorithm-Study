//백준 14888번 연산자 끼워넣기
/*

*/

/*
#include<iostream>
using namespace std;

int MAX = -1000000000; // -10억
int MIN = 1000000000; // 10억

int Operator[4]; // 연산자
int num[11]; // 입력 순열
int N;

void DFS(int plus, int minus, int multiple, int divide, int x, int sum)
{

	if (x == N - 1)
	{
		if (sum < MIN) MIN = sum;
		if (sum > MAX) MAX = sum;
	}

	if (plus > 0) DFS(plus - 1, minus, multiple, divide, x + 1, sum + num[x + 1]);
	if (minus > 0) DFS(plus, minus - 1, multiple, divide, x + 1, sum - num[x + 1]);
	if (multiple > 0) DFS(plus, minus, multiple - 1, divide, x + 1, sum * num[x + 1]);
	if (divide > 0) DFS(plus, minus, multiple, divide - 1, x + 1, sum / num[x + 1]);
}

int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> num[i];
	}

	for (int i = 0; i < 4; i++)
	{
		cin >> Operator[i];
	}

	DFS(Operator[0], Operator[1], Operator[2], Operator[3], 0, num[0]);

	cout << MAX << "\n" << MIN;
}
*/