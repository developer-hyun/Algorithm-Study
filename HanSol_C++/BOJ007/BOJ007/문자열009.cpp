//백준 2941번 크로아티아 알파벳
	/*
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string cro[8] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
	string word;
	cin >> word;

	int count;
	for (int i = 0; i < 8; ++i)
	{
		while (true)
		{
			//비교가 끝날때까지 찾기
			count = word.find(cro[i]);
			if (count == string::npos)
				break;
			//cro와 해당하는 문자열은 c로 변경
			word.replace(count, cro[i].length(), "c");
			//ex) ljes=njak -> ceccak 로 바뀌므로 바뀐 것의 문자열 길이를 구하면 됨
		}
	}

	cout << word.length();

	return 0;
}*/