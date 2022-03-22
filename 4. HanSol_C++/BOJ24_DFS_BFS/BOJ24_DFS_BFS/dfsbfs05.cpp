//백준 2178번 미로 탐색
/*
1시간 넘김
1012번 유기농 배추 문제와 다르게 bfs 사용해야 했고
방문한 기록을 따로 배열을 만들어서 체크해줘야 했음
*/

#include <iostream>
#include <queue>

using namespace std;
#define MAX 100

//intput
int n, m;
string map[MAX]; //인접 행렬 그래프

//output
int visited[MAX][MAX]; //방문 여부
queue<pair<int, int>> q;

//x축 이동, y축 이동
int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };

//너비우선탐색
void bfs(int x, int y) {
	q.push(make_pair(x, y));
	visited[x][y] = 1;

	while (!q.empty()) {
		x = q.front().first;
		y = q.front().second;
		q.pop();

		//상하좌우로 이동해서 1인 값을 찾기
		for (int i = 0; i < 4; i++) {
			int n_x = x + dx[i];
			int n_y = y + dy[i];

			//범위를 넘어설때
			if (n_x < 0 || n_x >= n || n_y < 0 || n_y >= m) continue;

			if (visited[n_x][n_y] == 0 && map[n_x][n_y] == '1') {
				q.push(make_pair(n_x, n_y));
				visited[n_x][n_y] = visited[x][y] + 1; //방문 체크
			}
		}
	}
}

int main()
{
	cin >> n >> m;

	//한줄씩 받아오기
	for (int i = 0; i < n; i++) {
		cin >> map[i];
	}

	bfs(0, 0);

	cout << visited[n-1][m-1] << "\n";

	return 0;
}