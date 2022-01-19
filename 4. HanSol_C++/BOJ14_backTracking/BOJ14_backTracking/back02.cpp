//백준 15650번 N과 M (2)
/*
is_sorted(first, last) : 오름차순 정렬 확인
1이면 true, 0이면 false
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
        if (!visited[i])
        {
            visited[i] = true;
            arr[cnt] = i;
            dfs(cnt + 1);
            visited[i] = false;
        }
    }
}

int main() {
    cin >> n >> m;
    dfs(0);
}
*/