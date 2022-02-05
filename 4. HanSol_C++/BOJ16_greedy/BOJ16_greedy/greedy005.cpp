//백준 13305번 주유소

/**/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> v1(n-1); //도로 길이
	vector<int> v2(n); //리터당 가격

	for (int i = 0; i < n-1; i++)
	{
		cin >> v1[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> v2[i];
	}
}