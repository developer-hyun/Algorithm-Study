//백준 1018번 체스판 다시 칠하기
/*
8*8 크기의 체스판으로 잘라낸 후
다시 칠해야하는 정사각형 개수 최솟값

Point: 

문제 푼 방법: 
*/

/*
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, M; //세로(행) 가로(열)
	cin >> N >> M;

	vector<int> v;
	vector<vector<int>> v2; //2차원벡터 정의

	for (int i = 0; i < N; i++){
		cin >> v[i];
	}

	for (int i = 0; i < M; i++){
		cin >> v2[v[i]];
	}

	

	//만약 8*8이면 W 또는 B의 상하좌우에 똑같은게 있으면 +1
	//1행1열부터 탐색시작

	//만약 8*8 보다 크면 1행이나 맨끝행부터 읽어서 겹치는게 많으면 삭제

	return 0;
}
*/