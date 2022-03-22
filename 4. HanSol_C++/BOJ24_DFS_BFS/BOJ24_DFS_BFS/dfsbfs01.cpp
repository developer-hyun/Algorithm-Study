//���� 1260�� DFS�� BFS
/*
������ ����Ҷ��� ��ü�� �����ִ� pair
�ƴϸ� �׳� vector�� �̿��� 2���� �迭

vector�� stackó�� �� �ڿ� �������� �����ϰų� ������

dfs - stack / bfs - queue
*/

#include <iostream>
#include <queue>

using namespace std;
#define MAX 1001

int n, m, v; //����, ����, ��������
int map[MAX][MAX]; //���� ��� �׷���
bool visited[MAX]; //�湮 ����
queue<int> q;

//�湮 ����
void reset() {
	for (int i = 1; i <= n; i++) {
		visited[i] = 0;
	}
}

//���̿켱Ž��
void dfs(int v) {
	visited[v] = true; //�湮 üũ
	cout << v << " ";

	//������ ������ 1���Ͷ� 1 ����
	for (int i = 1; i <= n; i++) {
		if (map[v][i] == 1 && visited[i] == 0) { //������ ����Ǿ� �����鼭 �湮 ���ߴٸ�
			dfs(i);
		}
	}
}

//�ʺ�켱Ž��
void bfs(int v) {
	//�ְ� �տ��� ���� �ڷ� �ִ� ���
	q.push(v);
	visited[v] = true;
	cout << v << " ";

	while (!q.empty()) {
		v = q.front();
		q.pop();

		for (int i = 1; i <= n; i++) {
			if (map[v][i] == 1 && visited[i] == 0) { //������ ����Ǿ� �����鼭 �湮 ���ߴٸ�
				q.push(i); //����Ǿ� �ִ� �� 
				visited[i] = true;
				cout << i << " ";
			}
		}
	}
}

int main()
{
	//���� ����, ���� ����, ���� ����
	cin >> n >> m >> v;

	//���� �Է�
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		//����� üũ
		map[a][b] = 1;
		map[b][a] = 1;
	}

	reset(); //�湮 ����
	dfs(v);

	cout << "\n";

	reset();
	bfs(v);

	return 0;
}