//���� 1874�� ���� ����
/*���ʴ�� �����ϱ� cnt�� üũ
���ÿ� ���� ���� �޾ƿ� �� ���� ũ�� �Ұ���*/

#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
	cin.tie(0);
	ios::sync_with_stdio(0);

	int n, num;
	int cnt = 1; //���ÿ� ���� ��
	stack<int> s;
	string result = "";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num;

		if (num >= cnt) {
			while (num + 1 != cnt) {
				s.push(cnt++);
				result += "+\n";
			}
			s.pop();
			result += "-\n";
		}
		else {
			if (s.top() == num) {
				s.pop();
				result += "-\n";
			}
			else {
				result = "NO";
				break;
			}
		}
	}
	cout << result << "\n";

	return 0;
}