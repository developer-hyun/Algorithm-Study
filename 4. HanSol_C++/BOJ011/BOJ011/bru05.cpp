//���� 1436�� ��ȭ���� ��
/*
666�� �����ϴ� ���ڵ�

Point: if �ȿ� ã�¹��ڰ� ���� ����� ǥ�ð� �߿��ߴ�.
ó���� ������ �ʾҴ��� ���ϴ� find�� �۵��� �ȵƴ�.

���� Ǭ ���: ��� �÷��� 666 ã��
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int n; //n��°
	cin >> n;

	int num = 666; //����
	int count = 1; //ī��Ʈ

	//666�� ������ ��ž
	while (count !=n)
	{
		num++;

		//cout << "num�� ��: " << to_string(num) << "\n";

		//find�� ���ڿ����� ã�� �Լ��̹Ƿ� int�� string���� ��ȯ
		//ã�� ���ڰ� ���� ��� string::npos�� ����
		//npos�� no position���� �����Ⱚ�� ����
		if (to_string(num).find("666") != string::npos)
		{
			count++;
		}
	}

	cout << num << "\n";

	return 0;
}
