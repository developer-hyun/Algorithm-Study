//���� 1012�� ����� ����
/*
cnt �ʱ�ȭ �ʼ�
*/

#include <iostream>

using namespace std;
#define MAX 2501

//intput
int T; //�׽�Ʈ ���̽�
int m, n, k; //�� ���α���, ���α���, ���� ��ġ
int map[MAX][MAX]; //���� ��� �׷���

//output
int cnt = 0;

//x�� �̵�, y�� �̵�
int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };
void dfs(int x, int y) {
	//�����¿�� �̵��ؼ� 1�� ���� ã��
	for (int i = 0; i < 4; i++) {
		int n_x = x + dx[i];
		int n_y = y + dy[i];

		//������ �Ѿ��
		if (n_x < 0 || n_x >= m || n_y < 0 || n_y >= n) continue;

		if (map[n_x][n_y] == 1) {
			map[n_x][n_y] = 2; //�湮 üũ
			dfs(n_x, n_y);
		}
	}
}

void check() {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (map[i][j] == 1) {
				map[i][j] = 2; //�湮 üũ
				dfs(i, j); //������ ������ dfs(�� ã�������� ����)
				cnt++;
			}
		}
	}
	cout << cnt << "\n";
}

int main()
{
	//������ ũ��
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> m >> n >> k;

		//���� �Է�
		for (int j = 0; j < k; j++) {
			int a, b;
			cin >> a >> b;
			map[a][b] = 1;
		}
		check();
		cnt = 0; //cnt �ʱ�ȭ
	}

	return 0;
}