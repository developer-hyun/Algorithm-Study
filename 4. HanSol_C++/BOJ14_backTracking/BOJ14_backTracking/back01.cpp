//���� 15649�� N�� M (1)
/*
define�� ������ ����� ���� ����, ����� �̸� �ٿ��ֱ�(��ũ�� ���)
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
    //cnt�� m�� ���ٸ� ���
    if (cnt == m)
    {
        for (int i = 0; i < m; i++)
            cout << arr[i] << ' ';
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

/*���� �õ��� ��
#include <iostream>
#define MAX 8

using namespace std;

int n, m; //�־����� ��
int arr[MAX]; //1���� N���� �迭

//m��ŭ ����
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