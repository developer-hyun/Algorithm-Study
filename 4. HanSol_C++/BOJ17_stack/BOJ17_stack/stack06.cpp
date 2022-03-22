//���� 17298�� ��ū��
/*Ai�� �����ʿ��� Ai���� ���� ū ��
������ -1

���� for�� -> �ð����⵵ O(N**2)
������ ���� Ǯ�� -> �ð����⵵ O(N)*/

/*
#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int s[1000001]; //��¶�� ����
	int save[1000001];
	stack<int> st; //��� �ױ�

	for (int i = 0; i < n; i++)
		cin >> s[i];

	//NGE
	//�ں��� Ž��
	for (int i = n - 1; i >= 0; i--)
	{
		while (!st.empty() && st.top() <= s[i])
			st.pop();

		if (st.empty())
			save[i] = -1;
		else
			save[i] = st.top();

		st.push(s[i]);
	}

	for (int i = 0; i < n; i++)
	{
		cout << save[i] << " ";
	}
}
*/