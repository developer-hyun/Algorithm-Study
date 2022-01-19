//백준 15651번 N과 M (3)
/*
같은 수를 여러번 골라도 되니까 
for문에서 true가 된 것을 거를 필요가 없음
*/

/*
#include <iostream>
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