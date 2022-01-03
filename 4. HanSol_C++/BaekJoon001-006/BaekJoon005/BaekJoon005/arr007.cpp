//백준 4344번 평균은 넘겠지
	
#include <iostream>

using namespace std;

int main()
{
	int C, N;//테스트 케이스, 학생 수
	int count, arg; //평균 넘는 애들 수, 평균
	int score[1000] = {}; //N명의 학생 점수
	double total;

	cin >> C;

	for (int i = 0; i < C; i++)
	{
		arg = 0;
		count = 0;
		cin >> N;

		for (int j = 0; j < N; j++)
		{
			cin >> score[j];
			//cout << "점수: " << score[j] << "\n";
			arg += score[j];
			//cout << "점수 합계: " << sum << "\n";
		}

		arg = arg / N; // 평균
		//cout << "평균: " << arg << "\n";
		for (int j = 0; j < N; j++)
		{
			if (arg < score[j])
			{
				count++;
			}
		}
		total = (double)count / N * 100;
		cout << fixed;
		cout.precision(3);
		cout << total << "%\n";

	}

	return 0;
}