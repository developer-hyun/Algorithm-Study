//백준 1436번 영화감독 숌
/*
666을 포함하는 숫자들

Point: if 안에 찾는문자가 없는 경우의 표시가 중요했다.
처음에 해주지 않았더니 원하는 find가 작동이 안됐다.

문제 푼 방법: 계속 늘려서 666 찾기
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int n; //n번째
	cin >> n;

	int num = 666; //숫자
	int count = 1; //카운트

	//666이 있으면 스탑
	while (count !=n)
	{
		num++;

		//cout << "num의 수: " << to_string(num) << "\n";

		//find는 문자열에서 찾는 함수이므로 int를 string으로 변환
		//찾는 문자가 없을 경우 string::npos를 리턴
		//npos는 no position으로 쓰레기값을 뜻함
		if (to_string(num).find("666") != string::npos)
		{
			count++;
		}
	}

	cout << num << "\n";

	return 0;
}
