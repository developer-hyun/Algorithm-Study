//백준 3053번 택시 기하학
/*택시 기하학 원의 넓이: 2*반지름*반지름*/

/*
#include <iostream>

//pi를 사용하기 위함
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
	int r;
	cin >> r;

	double pi = M_PI;

	double u = r * r * pi; //유클리드
	double t = 2 * r * r; //택시

	cout.setf(ios::showpoint); //끝에 0표시
	cout << fixed; //소수점 아래 고정
	cout.precision(6); //소수점 아래 6자리까지 표시

	cout << u << "\n";
	cout << t << "\n";
}
*/