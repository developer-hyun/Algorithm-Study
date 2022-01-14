//백준 15649번 N과 M (1)
/*
define은 일종의 별명과 같은 개념, 상수에 이름 붙여주기(매크로 상수)
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
            cout << arr[i] << ' ';
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

/*내가 시도한 것
#include <iostream>
#define MAX 8

using namespace std;

int n, m; //주어지는 수
int arr[MAX]; //1부터 N까지 배열

//m만큼 돌기
void repeat(int cnt)
{
	for (int i = 0; i < cnt; i++)
	{
		cout << 
	}
}

int main()
{
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		arr[i] = i + 1;
	}
}
*/