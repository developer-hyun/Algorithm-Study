//백준 1152번 단어의 개수
	/*
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sen;
	getline(cin, sen); //공백 포함 문자열 입력받기
	
	int count = 1;

	for (int i = 0; i < sen.length(); i++)
	{
		//만약 공백이라면
		if(sen[i] == ' ')
		{
			count++;
		}
	}
	//앞 공백
	if (sen[0] == ' ')
	{
		count--;
	}
	//뒷 공백
	if (sen[sen.length()-1] == ' ')
	{
		count--;
	}

	cout << count;

	return 0;
}
*/