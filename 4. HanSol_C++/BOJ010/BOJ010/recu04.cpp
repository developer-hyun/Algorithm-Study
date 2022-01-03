//백준 11729번 하노이 탑 이동 순서
/*시프트연산: a의 2제곱은 a << 1*/


#include <iostream>
#include <string>

using namespace std;

void hanoi(int n, int from, int to, int pass)
{
	if (n == 1)
		cout << from << " " << to << "\n";
	else
	{
		//n-1개의 원판을 3번을 지나 2번으로 보낸다.
		hanoi(n - 1, from, pass, to);
		//움직임 출력
		cout << from << " " << to << "\n";
		//n-1개의 원판을 1번 원판을 지나 3번으로 보낸다.
		hanoi(n - 1, pass, to, from);
	}
}

int main()
{
	int num;
	cin >> num;
	//2의 N제곱: 1<<num
	cout << (1 << num) - 1 << "\n";
	//장대 1 3 2 표시
	hanoi(num, 1, 3, 2);
}

/*
int count; //몇번 돌아갔는지 세기

int hanoi(int n)
{
	int bottom[3]; //바닥 장대 3개

	for (int i = 0; i < n; i++)
	{
		bottom[0] = to_string(i);
	}

	bottom[0] = 

	if (bottom)
	{

	}

	cout << hanoi(n) << "\n";
}

int main()
{
	int N; //원판 개수
	cin >> N;
}
*/