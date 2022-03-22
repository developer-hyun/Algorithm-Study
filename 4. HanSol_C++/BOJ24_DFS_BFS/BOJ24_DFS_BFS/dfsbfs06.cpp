//���� 7576�� �丶��
/*
1�ð� ����
ť�� �̹� ���� �丶�並 �־ �������� ��� ��� ���� �ְ� �ݺ��ؾ� ��
*/

#include <iostream>
#include <queue>

using namespace std;
#define MAX 1001

//intput
int m, n; //����, ����
int day = 0;
int map[MAX][MAX]; //���� ��� �׷���

//output
queue<pair<int, int>> q;

//x�� �̵�, y�� �̵�
int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };

//�ʺ�켱Ž��
void bfs() {
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		//�����¿�� �̵��ؼ� 1�� ���� ã��
		for (int i = 0; i < 4; i++) {
			int n_x = x + dx[i];
			int n_y = y + dy[i];

			//������ �Ѿ��
			if (n_x < 0 || n_x >= n || n_y < 0 || n_y >= m) continue;

			if (map[n_x][n_y] == 0) { //���� ���� �丶����
				map[n_x][n_y] = map[x][y] + 1; //�湮 üũ
				q.push({ n_x, n_y });
			}
		}
	}
}

int main()
{
	cin >> m >> n;

	//�׷��� ��ü
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
			if (map[i][j] == 1) { //���� �丶�� ����
				q.push({ i, j });
			}
		}
	}

	bfs();

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			//�������� �丶�� 0 �� ������ ���
			if (map[i][j] == 0) {
				cout << "-1";
				return 0;
			}
			//�� �Ͱ� �󸶳� �ɷȳ�(�� ���� �ִ밪 ����)
			if (day < map[i][j]) {
				day = map[i][j];
			}
		}
	}

	cout << day - 1 << "\n";

	return 0;
}