//백준 2178번 미로 탐색
/*

*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define MAX 101

//intput
int n, m;
string map[MAX]; //인접 행렬 그래프

//output
int cnt = 1;
vector<int> h;

//x축 이동, y축 이동
int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };
void dfs(int x, int y) {
	cout << "x 값: " << x << ", y 값: " << y << "\n";

	if (x == n - 1 && y == m - 1) return;

	//상하좌우로 이동해서 1인 값을 찾기
	for (int i = 0; i < 4; i++) {
		int n_x = x + dx[i];
		int n_y = y + dy[i];

		//범위를 넘어설때
		if (n_x < 0 || n_x >= n || n_y < 0 || n_y >= m) continue;

		if (map[n_x][n_y] == '1') {
			cnt++;
			map[n_x][n_y] = '2'; //방문 체크
			cout << "n_x 값: " << n_x << ", n_y 값: " << n_y << "\n";
			dfs(n_x, n_y);
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

	map[0][0] = '2'; //방문체크
	dfs(0, 0);

	cout << cnt << "\n";

	return 0;
}