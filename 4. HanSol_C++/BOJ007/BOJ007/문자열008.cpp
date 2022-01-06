//백준 5622번 다이얼
	/*
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string word;
	int a[26] = { 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10 };
	//int a[26] = {};
	//for (int i = 0; i < 26; i++)
	//{
	//	if (i / 3 == i)
	//	{

	//	}
	//}
	int min = 0;

	cin >> word;

	for (int i = 0; i < word.length(); ++i) {
		int num = word[i] - 65; //word[0]가 W면 W가 들어감(알파벳 순서)
		min += a[num];
	}

	cout << min << "\n";

	return 0;
}*/