//백준 9020번 골드바흐의 추측
/*마지막에 오래걸렸는데 빼는 값이 클수록 차이가 적다고 생각하면
빼는 값만 최종으로 구해서 입력값을 빼주면 된다.*/

/*
#include <iostream>
#include <cmath>

using namespace std;

//소수면 1
bool Sosu(int x)
{
	int n = 10000;
	int rt;

	rt = sqrt(x);	//루트 i

		//2 또는 3이면 소수니까 출력
	if (x == 2 || x == 3)
	{
		return true;
	}

	//i가 홀수일때
	if (x % 2)
	{
		//제곱근까지 나누기
		for (int j = 2; j <= rt; j++)
		{
			//나누어 떨어지면 소수가 아니므로 for문 나가기
			if (!(x % j))
				return false;

			//끝까지 나누어 떨어지지 않았으면 출력
			if (j == rt)
				return true;
		}
	}

	return false;
}

int main()
{
	int T;
	cin >> T;

	int num;
	int a = 0;
	int b = 0;

	for (int i = 0; i < T; i++)
	{
		cin >> num;

		for (int j = 2; j < num; j++)
		{
			//j가 소수라면
			if (Sosu(j) == 1)
			{
				a = num - j; //소수를 뺀 값

				//a가 소수이고 j가 a보다 클때(중복제거)
				if (Sosu(a) == 1 && j <= a)
				{
					b = j;
				}
			}
			else
				continue;
		}
		cout << b << " " << num - b << "\n";
	}

}
*/