//백준 10989번 수 정렬하기 3
/*
계수정렬(O(N+K)): 별도의 개수를 세주는 배열을 선언하고 주어진 배열의 값을
새로운 배열의 인덱스 값을 찾아서 카운트해준다. 그리고 맨 앞부터 인덱스를
개수만큼 출력하면 된다.

현존하는 정렬 알고리즘 중 기수 정렬과 계수 정렬이 가장 빠르다.

vector 쓰니까 메모리 초과뜬다. 그냥 배열로 해야함.
*/

/*
#include <iostream>
//#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num; //수의 개수
	cin >> num;

	int a[10001] = {0,}; //개수 저장
	int n;

	for (int i = 0; i < num; i++)
	{
		cin >> n; //수 입력
		a[n] += 1; //해당 인덱스값에 +1
	}

	for (int i = 0; i < 10001; i++)
	{
		for (int j = 0; j < a[i]; j++)
		{
			cout << i << "\n";
		}
	}

	//ios::sync_with_stdio(false);
	//cin.tie(NULL);
	//cout.tie(NULL);

	//int num; //수의 개수
	//cin >> num;

	//vector<int> a(num, 0);
	//int n;
	//for (int i = 0; i < num; i++)
	//{
	//	cin >> n;
	//	a[n] += 1;
	//}
	//for (int i = 0; i < num; i++)
	//{
	//	for (int j = 0; j < a[i]; j++)
	//	{
	//		cout << i << '\n';
	//	}
	//}

	//int n; //받는 수
	//vector<int> a; //주어진 배열
	//vector<int> b(num, 0); //카운트 배열, num크기만큼 생성 후 0으로 초기화

	//for (int i = 0; i < num; i++){
	//	cin >> n;
	//	a.push_back(n);
	//}

	//for (int i = 0; i < num; i++)
	//{
	//	b[a[i]] += 1;
	//}

	//for (int i = 0; i < num; i++)
	//{
	//	for (int j = 0; j < b[i]; j++)
	//	{
	//		cout << i << '\n';
	//	}
	//}

	return 0;
}
*/