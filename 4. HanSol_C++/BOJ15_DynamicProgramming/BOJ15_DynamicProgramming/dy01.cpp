//���� 1003�� �Ǻ���ġ �Լ�
/*
�Ǻ���ġ �Լ��� ����� �ݺ��Ǵ� �κ��� �־ ������ȹ������ �װ� ����ȭ��ų �� ����.
 
*/

#include <iostream>

using namespace std;

int a[41];
int fibo(int n) {
	if (n <= 0) {
		a[0] = 0;
		return 0;
	}
	else if (n == 1) {
		a[1] = 1;
		return 1;
	}

	if (a[n] != 0) {
		return a[n];
	}
	else {
		return a[n] = fibo(n - 1) + fibo(n - 2);
	}
}

int main()
{
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;
		if (n==0) {
			cout << "1 0" << "\n";
		}
		else if (n == 1) {
			cout << "0 1" << "\n";
		}
		else {
			fibo(n);
			cout << a[n - 1] << " " << a[n] << "\n";
		}
	}
	return 0;
}