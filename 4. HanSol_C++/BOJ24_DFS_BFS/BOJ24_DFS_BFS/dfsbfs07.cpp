//���� 7569�� �丶��
/*
����ü�� ����Ͽ� queue�� �� ���� ǥ���� �� ����

��, ��, ���� ������ ��Ȯ�� ������ ���ƾ���
*/

#include <iostream>
#include <queue>

using namespace std;
#define MAX 100

//����ü
struct tomato {
	int z, x, y;
};

//intput
int m, n, h; //����, ����, �÷����� ������ ��
int day = 0;
int map[MAX][MAX][MAX]; //���� ��� �׷���, ���࿭

//output
queue<tomato> q;

//x�� �̵�(��), y�� �̵�(��), z�� �̵�(��)
int dx[] = { 1,-1,0,0,0,0 };
int dy[] = { 0,0,1,-1,0,0 };
int dz[] = { 0,0,0,0,1,-1 };

//�ʺ�켱Ž��
void bfs() {
	while (!q.empty()) {
		int z = q.front().z; //��
		int x = q.front().x; //��
		int y = q.front().y; //��
		q.pop();

		//�����¿� �� �Ʒ��� �̵��ؼ� 0�� ���� ã��
		for (int i = 0; i < 6; i++) {
			int n_z = z + dz[i];
			int n_x = x + dx[i];
			int n_y = y + dy[i];

			//������ �Ѿ��
			if (n_x < 0 || n_x >= n || n_y < 0 || n_y >= m || n_z < 0 || n_z >= h) continue;

			if (map[n_z][n_x][n_y] == 0) { //���� ���� �丶����
				map[n_z][n_x][n_y] = map[z][x][y] + 1; //�湮 üũ
				q.push({ n_z, n_x, n_y });
			}
		}
	}
}

int main()
{
	cin >> m >> n >> h;

	//�׷��� ��ü, ���࿭
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				cin >> map[i][j][k];
				if (map[i][j][k] == 1) { //���� �丶�� ����
					q.push({ i, j, k });
				}
			}
			
		}
	}

	bfs();

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++)
			{
				//�������� �丶�� 0 �� ������ ���
				if (map[i][j][k] == 0) {
					cout << "-1";
					return 0;
				}
				//�� �Ͱ� �󸶳� �ɷȳ�(�� ���� �ִ밪 ����)
				if (day < map[i][j][k]) {
					day = map[i][j][k];
				}
			}
		}
	}

	cout << day - 1 << "\n";

	return 0;
}