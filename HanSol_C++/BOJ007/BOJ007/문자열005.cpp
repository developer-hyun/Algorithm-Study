//���� 1157�� �ܾ����
	/*
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string w;
	cin >> w;

	int a[26] = {}; //���ĺ� ������ �� 26��

	//���� ���� ��� �빮�ڷ� ��ȯ
	for (int i = 0; i < w.length(); i++)
	{
		w[i] = toupper (w[i]); //�빮��, �ҹ��ڴ� tolower
		a[w[i] - 'A']++; //�� �ڸ��� ����
		//ex) B��� 66-65=1�̹Ƿ� �ι�° �ڸ��� ����
	}

	int max = 0; //�ߺ������� ���� ������
	int cnt = 0; //�ߺ��� Ƚ��
	int word; //���� ���� �ߺ� �ܾ�

	for (int i = 0; i < 26; i++)
	{
		//�ִ� �ߺ� �������� �� ������ �ִٸ�
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
	//�ߺ� ������ ���������
	if (cnt > 1)
	{
		cout << "\?";
	}
	else
	{
		cout << (char)(word + 'A'); //�ƽ�Ű�ڵ� ��ȯ, ���� ������ ��ȯ
	}

	return 0;
}
*/