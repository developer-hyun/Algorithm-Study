//���� 1546�� ���
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
		//���� �ޱ�
		cin >> score[i];
	}

	//�ִ� �̷��� �ִ�� score[N-1]
	sort(score, score + N);
	
	//���� ���� ����
	double Nscore[1001] = {};
	for (int i = 0; i < N; i++)
	{
		Nscore[i] = score[i] / score[N - 1] * 100;
		
	}
	

	//���� ���� ���
	double sum = 0;
	double arg;
	for (int i = 0; i < N; i++)
	{
		//cout << "1: " << Nscore[i] << "\n";
		sum = sum + Nscore[i];
		//cout << "�հ� �ϳ���: " << sum << "\n";
	}
	//cout << "�հ�: " << sum << "\n";
	arg = sum / N;

	cout << arg;

	return 0;
}
*/