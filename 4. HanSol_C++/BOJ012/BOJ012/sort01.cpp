//백준 2750번 수 정렬하기
/*
Point: vector을 사용한 것과 sort를 사용한것
자료구조 알고리즘 할 때 C++ STL 라이브러리를 많이 사용
vector, deque, list이 대표적
vector과 deque는 중간에 삽입 삭제가 적을때 사용
list는 중간에 삽입 삭제가 자주 발생할때 사용

내가 푼 방법: 시간복잡도가 O(N^2) 보다 높은 O(nlogn)이여서 성공
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