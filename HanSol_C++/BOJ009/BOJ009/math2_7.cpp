//백준 1085번 직사각형에서 탈출
/*w, h는 x, y보다 크니까 w = w - x, h = h - y 로 변환
min함수를 사용해서 가장 작은 수 출력*/


#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int s[4];

	//x, y, w, h 입력
	for (int i = 0; i < 4; i++)
	{
		cin >> s[i];
	}

	s[2] = s[2] - s[0]; //w = w - x
	s[3] = s[3] - s[1]; //h = h - y

	cout << min(min(s[0], s[1]), min(s[2], s[3])) << "\n";
}
