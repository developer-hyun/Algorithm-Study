//백준 2798번 블랙잭
/*브루트 포스: 노가다

고른 카드 합은 M을 넘지 않는 가까운 수
최대한 가까운 카드 3장의 합 출력 문제

문제 푼 방법: 경우의 수를 다 돌리고 딜러가 말한 수보다
작거나 같고 다른 경우의 수보다 높으면 출력*/

/*
#include <iostream>

using namespace std;

int main()
{
	int N, M; //카드 개수, 딜러가 외치는 숫자
	cin >> N >> M;

	int x[100]; //바닥에 놓인 카드

	for (int i = 0; i < N; i++)
	{
		cin >> x[i]; //카드에 쓰여 있는 수
	}

	int s = 0; //카드 합
	int max = 0; //젤 큰 수

	//3개씩 비교이므로 N-2 N-1을 설정해줌
	for (int i = 0; i < N - 2; i++)
	{
		for (int j = i + 1; j < N - 1; j++)
		{
			for (int k = j + 1; k < N; k++)
			{
				s = x[i] + x[j] + x[k];

				//조건에 맞는 최대값 찾기
				if (s <= M && s > max)
				{
					max = s;
				}
			}
		}
	}

	cout << max << "\n";

	return 0;
}
*/