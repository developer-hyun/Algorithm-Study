//백준 2606번 바이러스
/*
bfs dfs 다 가능할 것 같은데 문제가 bfs식으로 설명해서 bfs 함
*/

#include <iostream>
#include <queue>

using namespace std;
#define MAX 1001

int n, m; //컴터 수, 컴터 간선
int map[MAX][MAX]; //인접 행렬 그래프
bool visited[MAX]; //방문 여부
queue<int> q;

//방문 리셋
void reset() {
	for (int i = 1; i <= n; i++) {
		visited[i] = 0;
	}
}

//너비우선탐색
void bfs(int v) {
	//넣고 앞에서 빼서 뒤로 넣는 방식
	q.push(v);
	visited[v] = true;
	int cnt = 0;

	while (!q.empty()) {
		v = q.front();
		q.pop();

		for (int i = 1; i <= n; i++) {
			if (map[v][i] == 1 && visited[i] == 0) { //정점과 연결되어 있으면서 방문 안했다면
				q.push(i); //연결되어 있는 수 
				visited[i] = true;
				cnt++;
			}
		}
	}
	cout << cnt << "\n";
}

int main()
{
	//컴퓨터 수, 간선 개수(컴터 쌍의 수)
	cin >> n >> m;

	//간선 입력
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		//양방향 체크
		map[a][b] = 1;
		map[b][a] = 1;
	}

	reset();
	bfs(1);

	return 0;
}