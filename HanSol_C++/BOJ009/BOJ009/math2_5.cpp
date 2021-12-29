//백준 4948번 베르트랑 공준
/*1929번 소수 구하기를 이용하면 쉽게 풀린다.
바로 출력하지 않고 소수의 개수를 세서 출력하면 된다.*/


#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n = -1;
	int rt;
	int count = 0;

	while (true)
	{
		cin >> n;

		if (n == 0)
			break;

		for (int i = n + 1; i <= 2 * n; i++)
		{
			rt = sqrt(i);
			if (i == 2 || i == 3)
			{
				count++;
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
						count++;
					}
				}
			}
			
		}
		cout << count << "\n";
		count = 0;
	}
}