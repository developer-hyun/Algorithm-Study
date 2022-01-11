//백준 7568번 덩치
/*
몸무게, 키 다 크면 덩치 큼
몸무게는 큰데 키가 작거나 그 반대면 비교불가(동점)

Point: 덩치 큰 사람 수 + 1, 두개씩 비교

문제 푼 방법: ABCD의 사람이 있다면 두사람씩 묶어서 비교함

for_each문은 중간에 중단 불가
*/

/*
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int N; //전체 사람의 수
	cin >> N;

	//int* x = new int[N]; //동적할당

	vector<int> x(N); //몸무게
	vector<int> y(N); //키

	//x몸무게 y키 입력
	for (int i = 0; i < N; i++)
	{
		cin >> x[i] >> y[i];
	}

	int count = 0; //덩치 큰 사람 수
	vector<int> result; //등수

	//두개씩 비교
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			//덩치 큰 사람
			if (x[i] < x[j] && y[i] < y[j] && i != j)
			{
				//cout << i << " 번째 "<< j << " 반복\n";
				count++; //개수 증가
			}
		}

		//등수를 같은 위치에 저장
		result.push_back(count + 1);
		count = 0; //초기화
	}

	for (int i = 0; i < N; i++)
	{
		cout << result[i] << " ";
	}

	return 0;
}
*/