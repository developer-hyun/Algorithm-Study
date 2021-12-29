//백준 1929번 소수 구하기
/*제곱근을 이용하는 문제..*/

	
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int M, N;
	int rt; //제곱근
	cin >> M >> N;

	for (int i = M; i <= N; i++)
	{
		rt = sqrt(i);	//루트 i

		//2 또는 3이면 소수니까 출력
		if (i == 2 || i == 3)
		{
			cout << i << "\n";
			continue;
		}

		//i가 홀수일때
		if (i % 2)
		{
			//제곱근까지 나누기
			for (int j = 2; j <= rt; j++)
			{
				//나누어 떨어지면 소수가 아니므로 for문 나가기
				if (!(i % j))
					break;

				//끝까지 나누어 떨어지지 않았으면 출력
				if (j == rt)
				{
					cout << i << "\n";
				}
			}
		}
	}

	return 0;
}
