//백준 10872번 팩토리얼
/*n! = n * (n-1) * ...*/

#include <iostream>

using namespace std;

int fact(int n)
{
	if (n == 0)
		return 1;
	else
		return n * fact(n - 1);
}

int main()
{
	int num;
	cin >> num;

	int result = fact(num);

	cout << result << "\n";
}