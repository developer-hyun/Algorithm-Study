//���� 1152�� �ܾ��� ����
	/*
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sen;
	getline(cin, sen); //���� ���� ���ڿ� �Է¹ޱ�
	
	int count = 1;

	for (int i = 0; i < sen.length(); i++)
	{
		//���� �����̶��
		if(sen[i] == ' ')
		{
			count++;
		}
	}
	//�� ����
	if (sen[0] == ' ')
	{
		count--;
	}
	//�� ����
	if (sen[sen.length()-1] == ' ')
	{
		count--;
	}

	cout << count;

	return 0;
}
*/