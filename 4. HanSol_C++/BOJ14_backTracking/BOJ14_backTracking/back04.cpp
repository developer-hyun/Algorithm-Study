//백준 15652번 N과 M (4)
/*
비내림차순: 오름차순이고 자기자신도 포함
*/

/*
#include <iostream>
#include <algorithm>
#define MAX 9
using namespace std;

int n, m;
int arr[MAX] = { 0, };
bool visited[MAX] = { 0, };

void dfs(int cnt)
{
    //cnt가 m과 같다면 출력
    if (cnt == m)
    {
        if (is_sorted(arr, arr + m) == 0)
            return;

        for (int i = 0; i < m; i++)
        {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
    //dfs를 도는 문
    for (int i = 1; i <= n; i++)
    {
        visited[i] = true;
        arr[cnt] = i;
        dfs(cnt + 1);
        visited[i] = false;
    }
}

int main() {
    cin >> n >> m;
    dfs(0);
}
*/