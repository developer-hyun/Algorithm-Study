//백준 2577번 숫자의 개수
	/*
#include <iostream>

using namespace std;

int main()
{
	//ios_base::sync_with_stdio(0);

	//int count[10] = {};
	//int a, b, c;

	//cin >> a >> b >> c;

	//int res = a * b * c;


	//// 곱한 값이 0이 될 때 까지 반복
	//while (res != 0) {
	//	count[res % 10]++;	// res에서 나머지 10을 통해 자릿수를 얻어 인덱스로 활용
	//	res /= 10;			//  매 회 자릿수를 줄이기 위해 10을 나눈다.
	//}

	//// 0 부터 9까지 count 배열을 출력한다. (foreach문 사용)
	//for (int v : count) {
	//	cout << v << "\n";
	//}
	//return 0;

	//이건 복습
	int count[10] = {};
	int A, B, C;
	cin >> A >> B >> C;

	int M = A * B * C;

	while (M != 0)
	{
		count[M % 10]++;
		M = M / 10;
	}

	//돌린 후 다 돌렸으면 이제 출력해야지
	for (int num : count)
	{
		cout << num << "\n";
	}

	return 0;
}
*/