//���� 2606�� ���̷���
/*
bfs dfs �� ������ �� ������ ������ bfs������ �����ؼ� bfs ��
*/

#include <iostream>
#include <queue>

using namespace std;
#define MAX 1001

int n, m; //���� ��, ���� ����
int map[MAX][MAX]; //���� ��� �׷���
bool visited[MAX]; //�湮 ����
queue<int> q;

//�湮 ����
void reset() {
	for (int i = 1; i <= n; i++) {
		visited[i] = 0;
	}
}

//�ʺ�켱Ž��
void bfs(int v) {
	//�ְ� �տ��� ���� �ڷ� �ִ� ���
	q.push(v);
	visited[v] = true;
	int cnt = 0;

	while (!q.empty()) {
		v = q.front();
		q.pop();

		for (int i = 1; i <= n; i++) {
			if (map[v][i] == 1 && visited[i] == 0) { //������ ����Ǿ� �����鼭 �湮 ���ߴٸ�
				q.push(i); //����Ǿ� �ִ� �� 
				visited[i] = true;
				cnt++;
			}
		}
	}
	cout << cnt << "\n";
}

int main()
{
	//��ǻ�� ��, ���� ����(���� ���� ��)
	cin >> n >> m;

	//���� �Է�
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		//����� üũ
		map[a][b] = 1;
		map[b][a] = 1;
	}

	reset();
	bfs(1);

	return 0;
}