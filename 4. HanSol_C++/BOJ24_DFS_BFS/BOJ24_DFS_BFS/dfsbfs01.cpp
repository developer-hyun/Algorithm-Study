//백준 1260번 DFS와 BFS
/*
정렬을 사용할때는 객체를 묶어주는 pair
아니면 그냥 vector을 이용한 2차원 배열

vector은 stack처럼 맨 뒤에 아이템을 저장하거나 삭제함

dfs - stack / bfs - queue
*/

#include <iostream>
#include <queue>

using namespace std;
#define MAX 1001

int n, m, v; //정점, 간선, 시작정점
int map[MAX][MAX]; //인접 행렬 그래프
bool visited[MAX]; //방문 여부
queue<int> q;

//방문 리셋
void reset() {
	for (int i = 1; i <= n; i++) {
		visited[i] = 0;
	}
}

//깊이우선탐색
void dfs(int v) {
	visited[v] = true; //방문 체크
	cout << v << " ";

	//정점의 개수가 1부터라서 1 시작
	for (int i = 1; i <= n; i++) {
		if (map[v][i] == 1 && visited[i] == 0) { //정점과 연결되어 있으면서 방문 안했다면
			dfs(i);
		}
	}
}

//너비우선탐색
void bfs(int v) {
	//넣고 앞에서 빼서 뒤로 넣는 방식
	q.push(v);
	visited[v] = true;
	cout << v << " ";

	while (!q.empty()) {
		v = q.front();
		q.pop();

		for (int i = 1; i <= n; i++) {
			if (map[v][i] == 1 && visited[i] == 0) { //정점과 연결되어 있으면서 방문 안했다면
				q.push(i); //연결되어 있는 수 
				visited[i] = true;
				cout << i << " ";
			}
		}
	}
}

int main()
{
	//정점 개수, 간선 개수, 시작 정점
	cin >> n >> m >> v;

	//간선 입력
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		//양방향 체크
		map[a][b] = 1;
		map[b][a] = 1;
	}

	reset(); //방문 리셋
	dfs(v);

	cout << "\n";

	reset();
	bfs(v);

	return 0;
}