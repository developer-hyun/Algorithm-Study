//���� 2941�� ũ�ξ�Ƽ�� ���ĺ�
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
			//�񱳰� ���������� ã��
			count = word.find(cro[i]);
			if (count == string::npos)
				break;
			//cro�� �ش��ϴ� ���ڿ��� c�� ����
			word.replace(count, cro[i].length(), "c");
			//ex) ljes=njak -> ceccak �� �ٲ�Ƿ� �ٲ� ���� ���ڿ� ���̸� ���ϸ� ��
		}
	}

	cout << word.length();

	return 0;
}*/