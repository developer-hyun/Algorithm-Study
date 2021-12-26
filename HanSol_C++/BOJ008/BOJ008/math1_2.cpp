//백준 2292번 벌집
/*1 -> 1, 2 ~ 7 -> 2, 8~ 19 -> 3 등등 이런식으로 되어있는데 가지수가 6씩 늘어난다 이것을 활용하여
등비수열을 만들고 N값이 if문 사이에 들어가게 되면 i가 나오도록 했다.
자세한건 아이패드에 적어놓았음*/

/*
#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int a = 0;

	for (int i = 1; i <= N; i++) //N을 넘길 수는 없으니까
	{
		if (N > 1 + 6 * a && N <= 1 + 6 * (a + i))
		{
			cout << i + 1 << "\n";
			return 0;
		}
		if (N == 1)
		{
			cout << "1\n";
		}
		a = a + i;
	}

	return 0;
}
*/