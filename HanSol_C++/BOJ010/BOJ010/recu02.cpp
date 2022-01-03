//백준 10870번 피보나치 수 5
/*메인함수에서 for문을 돌려주면 
처음부터 원하는 수까지 진행할 수 있다.*/

	
#include <iostream>

using namespace std;

int fibo(int n)
{
	if (n == 0)
		return 0;
	else if (n <= 2)
		return 1;
	return fibo(n - 1) + fibo(n - 2);
}

int main()
{
	int num;
	cin >> num;

	int result;

	for (int i = 0; i < num + 1; i++)
	{
		result = fibo(i);
	}

	cout << result << "\n";
}