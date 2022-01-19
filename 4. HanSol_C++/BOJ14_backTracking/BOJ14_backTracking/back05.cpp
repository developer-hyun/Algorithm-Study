//백준 9663번 N-Queen
/*
행과 열이 겹치지 않는다.
1차원 배열로 생각가능
행은 인덱스, 열은 값
*/

/*
#include <iostream>
#define MAX 15
using namespace std;

int n;
int arr[MAX];
int cnt = 0;

//퀸 이동 체크
bool check(int c)
{
	for (int i = 0; i < c; i++)
	{
		//같은 열이거나 행-행, 열-열이 같은 경우는 배치 불가
		if (arr[i] == arr[c] || abs(arr[c] - arr[i]) == c - i)
			return false;
	}
	return true;
}

void queen(int q)
{
	//퀸이 다 배치되면 카운트
	if (q == n)
	{
		cnt++;
		return;
	}

	//체스판
	for (int i = 0; i < n; i++)
	{
		arr[q] = i;
		if (check(q))
			queen(q + 1);
	}
}

int main() {
    cin >> n;
    queen(0);

	cout << cnt << "\n";
}
*/

//2차원 사용한 것
//int arr[MAX][MAX]{}; //0으로 초기화
/*for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] == 0)
			{
				arr[i][j] += 1;
			}
			queen(q + 1);
		}
	}*/