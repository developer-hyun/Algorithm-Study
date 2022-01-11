//백준 2231번 분해합
/*
어떤 자연수 N의 가장 작은 생성자 구하기
ex. 256(=245+2+4+5)

문제 푼 방법: 분해합에 도달하기 위해 작은 수부터
분해해서 합해주고 N이랑 비교함
*/

/*
#include <iostream>

using namespace std;

int main()
{
	int N; //어떤 자연수
	cin >> N;

	int result = 0; //결과값

	//N과 같은 자릿수의 숫자를 계속 생성해서
	//분해합과 N이 같을때까지 반복
	for (int i = 0; i < N; i++)
	{
		int num = i; //분해합 할 수
		int s = 0; //분해합

		//분해합 구하기
		//num이 0이 될때까지
		while (num != 0)
		{
			s += num % 10; //일의 자리를 계속 더해준다.
			num /= 10; //더해준걸 빼줌
		}
		
		//만약 분해합이 N이랑 같으면 출력
		if (s + i == N)
		{
			//cout << "s: " << s << "\n";
			//cout << "i: " << i << "\n";
			//cout << "s+i: " << s + i << "\n";
			result = i;
			break;
		}
	}

	cout << result << "\n";
	
	return 0;
}
*/