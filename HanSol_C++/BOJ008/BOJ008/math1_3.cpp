//백준 1193번 분수찾기
/*분자는 홀수번째 대각선에서 아래로 증가, 짝수번째 대각선에서 위로 증가
분모는 분자의 반대방향*/

	/*
#include <iostream>


using namespace std;

int main()
{
	int X;
	cin >> X;

	int i = 1; //i번째 대각선

	//X가 몇번째 대각선에 있는지 파악
	while (X > i)
	{
		X = X - i;
		i++;
	}

	if (i % 2 == 1)
	{
		cout << i + 1 - X << "/" << X << "\n";
	}
	else
	{
		cout << X << "/" << i + 1 - X << "\n";
	}
}
*/

/*
int main()
{
	//조건에 맞는 값인걸 알아내고
	//그 값에 맞는 가짓수을 새로운 변수에 저장
	//분자 a 배열을 만들어서 저장, 분모 b 배열을 만들어서 저장
	//만약 짝수라면 분모(b)가 1부터 시작, 분자(a)는 X-1 부터 시작
	//만약 홀수라면 분모(b)가 X-1 부터 시작, 분자(a)는 1 부터 시작

	int X;
	cin >> X;

	int N = 0;
	int a = 1;
	int start = 0;
	int end = 0;

	//string bm; //분모
	//string bz; //분자

	//어디에 포함되어 있는지 구하고 분모 + 분자 값 저장
	for (int i = 1; i <= X; i++)
	{
		if (X >= a && X < a + i)
		{
			N = i + 1;
			start = a;
			end = a + i;
		}
		if (X == 1)
		{
			N = 1;
		}
		a = a + i;
	}
	cout << "X 값: " << X << "\n";
	cout << "N 값: " << N << "\n";
	cout << "start 값: " << start << "\n";
	cout << "end 값: " << end << "\n";

	for (int i = 0; i < N-1; i++)
	{
		bm[i] = i;
		
	}
	cout << "bm: " << bm[0] << "\n";

}
*/