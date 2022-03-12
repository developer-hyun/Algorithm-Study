//백준 7576번 토마토
/*
1시간 넘음
큐에 이미 익은 토마토를 넣어서 기준으로 삼고 계속 빼고 넣고를 반복해야 함
*/

#include <iostream>
#include <queue>

using namespace std;
#define MAX 1001

//intput
int m, n; //가로, 세로
int day = 0;
int map[MAX][MAX]; //인접 행렬 그래프

//output
queue<pair<int, int>> q;

//x축 이동, y축 이동
int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };

//너비우선탐색
void bfs() {
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		//상하좌우로 이동해서 1인 값을 찾기
		for (int i = 0; i < 4; i++) {
			int n_x = x + dx[i];
			int n_y = y + dy[i];

			//범위를 넘어설때
			if (n_x < 0 || n_x >= n || n_y < 0 || n_y >= m) continue;

			if (map[n_x][n_y] == 0) { //익지 않은 토마토라면
				map[n_x][n_y] = map[x][y] + 1; //방문 체크
				q.push({ n_x, n_y });
			}
		}
	}
}

int main()
{
	cin >> m >> n;

	//그래프 전체
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
			if (map[i][j] == 1) { //익은 토마토 저장
				q.push({ i, j });
			}
		}
	}

	bfs();

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			//익지않은 토마토 0 이 존재할 경우
			if (map[i][j] == 0) {
				cout << "-1";
				return 0;
			}
			//다 익고 얼마나 걸렸나(다 돌고 최대값 저장)
			if (day < map[i][j]) {
				day = map[i][j];
			}
		}
	}

	cout << day - 1 << "\n";

	return 0;
}