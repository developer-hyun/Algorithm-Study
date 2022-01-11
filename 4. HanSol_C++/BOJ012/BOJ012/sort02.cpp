//백준 2751번 수 정렬하기 2
/*
1. 선택 정렬(O(n^2)): 작은 수를 찾아서 맨 앞에 있는 데이터와 바꾼다.
2. 삽입정렬(O(n^2)): 맨 앞에 있는 숫자를 기준으로 다음 숫자와 비교해서 
더 작으면 앞으로 더 크면 이동 안함.
(거의 정렬되어 있으면 선택 정렬보다 빨라서 최선의 경우 O(n))
3. 퀵 정렬(O(nlogn)): 하나의 기준점(pivot)을 두고 왼쪽은 기준점보다 더 큰 수
오른쪽은 기준점보다 더 작은 수를 찾아 비교해서 위치변경하는 것
4. 계수정렬(O(N+K)): 별도의 개수를 세주는 배열을 선언하고 주어진 배열의 값을
새로운 배열의 인덱스 값을 찾아서 카운트해준다. 그리고 맨 앞부터 인덱스를
개수만큼 출력하면 된다.

sort를 사용한 정렬은 시간복잡도가 O(nlogn) 이다.
*/

/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int num; //수의 개수
	cin >> num;

	int p; //받아올 수
	vector<int> n; //넣을 공간

	for (int i = 0; i < num; i++)
	{
		cin >> p;
		n.push_back(p); //하나씩 받는다.
	}

	sort(n.begin(), n.end()); //정렬

	//출력
	for (int i = 0; i < num; i++)
	{
		cout << n[i] << "\n";
	}

	return 0;
}
*/