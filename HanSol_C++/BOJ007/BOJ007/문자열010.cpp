//백준 1316번 그룹 단어 체커
	
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N;
	cin >> N;

	string word;
	int count = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> word;
		bool tt = true; //중복확인
		for (int j = 0; j < word.length(); j++)
		{
			for (int k = 0; k < j; k++)
			{
				if (word[j] != word[j - 1] && word[j] == word[k])
				{
					tt = false;
					break;
				}
			}
		}
			if (tt)
				count++;
	}

	cout << count;

	return 0;
}