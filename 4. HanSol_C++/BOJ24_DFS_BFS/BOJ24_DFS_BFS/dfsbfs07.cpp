//백준 7569번 토마토
/*
구조체를 사용하여 queue를 더 쉽게 표현할 수 있음

면, 행, 열의 변수를 정확히 지정해 놓아야함
*/

#include <iostream>
#include <queue>

using namespace std;
#define MAX 100

//구조체
struct tomato {
	int z, x, y;
};

//intput
int m, n, h; //가로, 세로, 올려지는 상자의 수
int day = 0;
int map[MAX][MAX][MAX]; //인접 행렬 그래프, 면행열

//output
queue<tomato> q;

//x축 이동(행), y축 이동(열), z축 이동(면)
int dx[] = { 1,-1,0,0,0,0 };
int dy[] = { 0,0,1,-1,0,0 };
int dz[] = { 0,0,0,0,1,-1 };

//너비우선탐색
void bfs() {
	while (!q.empty()) {
		int z = q.front().z; //면
		int x = q.front().x; //행
		int y = q.front().y; //열
		q.pop();

		//상하좌우 위 아래로 이동해서 0인 값을 찾기
		for (int i = 0; i < 6; i++) {
			int n_z = z + dz[i];
			int n_x = x + dx[i];
			int n_y = y + dy[i];

			//범위를 넘어설때
			if (n_x < 0 || n_x >= n || n_y < 0 || n_y >= m || n_z < 0 || n_z >= h) continue;

			if (map[n_z][n_x][n_y] == 0) { //익지 않은 토마토라면
				map[n_z][n_x][n_y] = map[z][x][y] + 1; //방문 체크
				q.push({ n_z, n_x, n_y });
			}
		}
	}
}

int main()
{
	cin >> m >> n >> h;

	//그래프 전체, 면행열
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				cin >> map[i][j][k];
				if (map[i][j][k] == 1) { //익은 토마토 저장
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
				//익지않은 토마토 0 이 존재할 경우
				if (map[i][j][k] == 0) {
					cout << "-1";
					return 0;
				}
				//다 익고 얼마나 걸렸나(다 돌고 최대값 저장)
				if (day < map[i][j][k]) {
					day = map[i][j][k];
				}
			}
		}
	}

	cout << day - 1 << "\n";

	return 0;
}