//백준 1874번 스택 수열
/*차례대로 들어오니까 cnt로 체크
스택에 넣을 수가 받아온 수 보다 크면 불가능*/

#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
	cin.tie(0);
	ios::sync_with_stdio(0);

	int n, num;
	int cnt = 1; //스택에 넣을 수
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