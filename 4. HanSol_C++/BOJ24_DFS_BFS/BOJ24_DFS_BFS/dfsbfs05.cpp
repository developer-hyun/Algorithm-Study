//���� 2178�� �̷� Ž��
/*
1�ð� �ѱ�
1012�� ����� ���� ������ �ٸ��� bfs ����ؾ� �߰�
�湮�� ����� ���� �迭�� ���� üũ����� ����
*/

#include <iostream>
#include <queue>

using namespace std;
#define MAX 100

//intput
int n, m;
string map[MAX]; //���� ��� �׷���

//output
int visited[MAX][MAX]; //�湮 ����
queue<pair<int, int>> q;

//x�� �̵�, y�� �̵�
int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };

//�ʺ�켱Ž��
void bfs(int x, int y) {
	q.push(make_pair(x, y));
	visited[x][y] = 1;

	while (!q.empty()) {
		x = q.front().first;
		y = q.front().second;
		q.pop();

		//�����¿�� �̵��ؼ� 1�� ���� ã��
		for (int i = 0; i < 4; i++) {
			int n_x = x + dx[i];
			int n_y = y + dy[i];

			//������ �Ѿ��
			if (n_x < 0 || n_x >= n || n_y < 0 || n_y >= m) continue;

			if (visited[n_x][n_y] == 0 && map[n_x][n_y] == '1') {
				q.push(make_pair(n_x, n_y));
				visited[n_x][n_y] = visited[x][y] + 1; //�湮 üũ
			}
		}
	}
}

int main()
{
	cin >> n >> m;

	//���پ� �޾ƿ���
	for (int i = 0; i < n; i++) {
		cin >> map[i];
	}

	bfs(0, 0);

	cout << visited[n-1][m-1] << "\n";

	return 0;
}