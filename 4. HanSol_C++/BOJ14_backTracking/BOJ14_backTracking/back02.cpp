//���� 15650�� N�� M (2)
/*
is_sorted(first, last) : �������� ���� Ȯ��
1�̸� true, 0�̸� false
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
    //cnt�� m�� ���ٸ� ���
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
    //dfs�� ���� ��
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