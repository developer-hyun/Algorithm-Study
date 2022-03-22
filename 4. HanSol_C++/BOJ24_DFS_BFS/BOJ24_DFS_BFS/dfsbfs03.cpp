//���� 2667�� ������ȣ���̱�
/*
�ѽð� ������ �𸣰���

�����¿�� �̵��� �� �ִ� �迭�� ���� üũ�� ���־�� ��.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define MAX 26

//intput
int n; //������ ũ��
string map[MAX]; //���� ��� �׷���

//output
int cnt = 0;
vector<int> h;

//x�� �̵�, y�� �̵�
int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };
void dfs(int x, int y) {
	//�����¿�� �̵��ؼ� 1�� ���� ã��
	for (int i = 0; i < 4; i++) {
		int n_x = x + dx[i];
		int n_y = y + dy[i];

		//������ �Ѿ��
		if (n_x < 0 || n_x >= n || n_y < 0 || n_y >= n) continue;
		
		if (map[n_x][n_y] == '1') {
			cnt++;
			map[n_x][n_y] = '2'; //�湮 üũ
			dfs(n_x, n_y);
		}
	}
}

int main()
{
	//������ ũ��
	cin >> n;

	//���پ� �޾ƿ���
	for (int i = 0; i < n; i++) {
		cin >> map[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (map[i][j] == '1') {
				cnt = 1;
				map[i][j] = '2'; //�湮 üũ
				dfs(i, j); //������ ������ dfs(�� ã�������� ����)
				h.push_back(cnt);
			}
		}
	}

	cout << h.size() << "\n";
	sort(h.begin(), h.end());
	for (int i = 0; i < h.size(); i++) {
		cout << h[i] << "\n";
	}

	return 0;
}