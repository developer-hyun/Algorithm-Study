//백준 2667번 단지번호붙이기
/*
한시간 지나도 모르겠음

상하좌우로 이동할 수 있는 배열을 만들어서 체크를 해주어야 함.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define MAX 26

//intput
int n; //지도의 크기
string map[MAX]; //인접 행렬 그래프

//output
int cnt = 0;
vector<int> h;

//x축 이동, y축 이동
int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };
void dfs(int x, int y) {
	//상하좌우로 이동해서 1인 값을 찾기
	for (int i = 0; i < 4; i++) {
		int n_x = x + dx[i];
		int n_y = y + dy[i];

		//범위를 넘어설때
		if (n_x < 0 || n_x >= n || n_y < 0 || n_y >= n) continue;
		
		if (map[n_x][n_y] == '1') {
			cnt++;
			map[n_x][n_y] = '2'; //방문 체크
			dfs(n_x, n_y);
		}
	}
}

int main()
{
	//지도의 크기
	cin >> n;

	//한줄씩 받아오기
	for (int i = 0; i < n; i++) {
		cin >> map[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (map[i][j] == '1') {
				cnt = 1;
				map[i][j] = '2'; //방문 체크
				dfs(i, j); //시작한 단지의 dfs(다 찾을때까지 돌림)
				h.push_back(cnt);
			}
		}
	}

	cout << h.size() << "\n";
	sort(h.begin(), h.end());
	for (int i = 0; i < h.size(); i++) {
		cout << h[i] << "\n";
	}

	return 0;
}