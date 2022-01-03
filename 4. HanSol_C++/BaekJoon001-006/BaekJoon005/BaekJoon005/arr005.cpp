//백준 1546번 평균
	/*
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;

	double score[1001] = {};
	for (int i = 0; i < N; i++)
	{
		//점수 받기
		cin >> score[i];
	}

	//최댓값 이러면 최대는 score[N-1]
	sort(score, score + N);
	
	//점수 조작 시작
	double Nscore[1001] = {};
	for (int i = 0; i < N; i++)
	{
		Nscore[i] = score[i] / score[N - 1] * 100;
		
	}
	

	//점수 조작 평균
	double sum = 0;
	double arg;
	for (int i = 0; i < N; i++)
	{
		//cout << "1: " << Nscore[i] << "\n";
		sum = sum + Nscore[i];
		//cout << "합계 하나씩: " << sum << "\n";
	}
	//cout << "합계: " << sum << "\n";
	arg = sum / N;

	cout << arg;

	return 0;
}
*/