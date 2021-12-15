//백준 10871번 X보다 작은 수
	
#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, X, A;
	cin >> N >> X;

	for (int i = 0; i < N; i++)
	{
		cin >> A;
		if (X > A)
		{
			cout << A << " ";
		}
	}

	return 0;
}