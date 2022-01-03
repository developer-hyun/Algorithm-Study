//백준 1157번 단어공부
	/*
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string w;
	cin >> w;

	int a[26] = {}; //알파벳 개수는 총 26개

	//받은 문자 모두 대문자로 변환
	for (int i = 0; i < w.length(); i++)
	{
		w[i] = toupper (w[i]); //대문자, 소문자는 tolower
		a[w[i] - 'A']++; //각 자리에 저장
		//ex) B라면 66-65=1이므로 두번째 자리에 저장
	}

	int max = 0; //중복개수가 가장 많은거
	int cnt = 0; //중복된 횟수
	int word; //가장 많은 중복 단어

	for (int i = 0; i < 26; i++)
	{
		//최대 중복 개수보다 더 많은게 있다면
		if (max < a[i])
		{
			max = a[i];
			cnt = 0;
			word = i;
		}
		if (max == a[i])
		{
			cnt++;
		}
	}
	//중복 많은게 여러개라면
	if (cnt > 1)
	{
		cout << "\?";
	}
	else
	{
		cout << (char)(word + 'A'); //아스키코드 변환, 본래 값으로 변환
	}

	return 0;
}
*/