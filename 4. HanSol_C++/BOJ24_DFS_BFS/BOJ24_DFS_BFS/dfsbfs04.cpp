//백준 1012번 유기농 배추
/*
cnt 초기화 필수
*/

#include <iostream>

using namespace std;
#define MAX 2501

//intput
int T; //테스트 케이스
int m, n, k; //밭 가로길이, 세로길이, 배추 위치
int map[MAX][MAX]; //인접 행렬 그래프

//output
int cnt = 0;

//x축 이동, y축 이동
int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };
void dfs(int x, int y) {
	//상하좌우로 이동해서 1인 값을 찾기
	for (int i = 0; i < 4; i++) {
		int n_x = x + dx[i];
		int n_y = y + dy[i];

		//범위를 넘어설때
		if (n_x < 0 || n_x >= m || n_y < 0 || n_y >= n) continue;

		if (map[n_x][n_y] == 1) {
			map[n_x][n_y] = 2; //방문 체크
			dfs(n_x, n_y);
		}
	}
}

void check() {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (map[i][j] == 1) {
				map[i][j] = 2; //방문 체크
				dfs(i, j); //시작한 단지의 dfs(다 찾을때까지 돌림)
				cnt++;
			}
		}
	}
	cout << cnt << "\n";
}

int main()
{
	//지도의 크기
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> m >> n >> k;

		//간선 입력
		for (int j = 0; j < k; j++) {
			int a, b;
			cin >> a >> b;
			map[a][b] = 1;
		}
		check();
		cnt = 0; //cnt 초기화
	}

	return 0;
}