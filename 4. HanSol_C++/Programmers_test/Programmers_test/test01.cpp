#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

//dfs: 스택이용, 재귀함수
//bfs,dfs 타겟 넘버
void dfs(vector<int> numbers, int target, int sum, int count) {

}

int solution(vector<int> numbers, int target) {
    int answer = 0;



    return answer;
}

//위장
int solution(vector<vector<string>> clothes) {
    int answer = 0;
    map<string, int> m;

    //종류 갯수 셈
    for (auto cloth : clothes) {
        m[cloth[1]] += 1;
    }

    //상의 2, 하의 1이면 (2+1) * (1+1) - 1
    for (auto it = m.begin(); it != m.end(); it++) {
        answer *= it->second + 1;
    }

    return answer - 1;
}

//접두사
bool solution(vector<string> phone_book) {
    bool answer = true;

    for (int i = 0; i < phone_book.size(); i++)
    {
        for (int j = 0; j < phone_book.size(); j++)
        {
            if (i != j && phone_book[i].size() < phone_book[j].size())
            {
                if (phone_book[i] == phone_book[j].substr(0,phone_book[i].size()))
                {
                    answer = false;
                }
            }
        }
    }

    for (string s1 : phone_book) {
        for (string s2 : phone_book) {
            if (s1 == s2)
                continue;
            if (s1.size() > s2.size()) {
                if (s2 == s1.substr(0, s2.length()))
                    return false;
            }
        }
    }

    sort(phone_book.begin(), phone_book.end());
    for (int i = 0; i < phone_book.size() - 1; i++) {
        if (phone_book[i] == phone_book[i + 1].substr(0, phone_book[i].size()))
            return false;
    }


    return answer;
}

int main() {
    vector<string> v{ "hello", "hi" };

    cout << v[0][1] << "\n";
}

vector<int> solution(vector<string> purchase) {
    vector<int> answer;

    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;

    for (int i = 0; i < purchase.size(); i++) {
        int month1 = stoi(purchase[i].substr(5, 2));
        int month2 = stoi(purchase[i + 1].substr(5, 2));
        int day1 = stoi(purchase[i].substr(8, 2));
        int day2 = stoi(purchase[i + 1].substr(8, 2));
        int money = stoi(purchase[i].substr(11));

        if (month1 == month2 && day2 - day1 <= 30) {
            if (money < 10000) {
                a += day2 - day1;
            }
            else if (money < 20000) {
                b += day2 - day1;
            }
            else if (money < 50000) {
                c += day2 - day1;
            }
            else if (money < 100000) {
                d += day2 - day1;
            }
            else
                e += day2 - day1;
        }
        else {
            //31
            if (month1 == 01 || month1 == 3 || month1 == 5 || month1 == 7 || month1 == 8 || month1 == 10 || month1 == 12) {
                int n = 31 - day1;
                if (money < 10000) {
                    a += n;
                }
                else if (money < 20000) {
                    b += n;
                }
                else if (money < 50000) {
                    c += n;
                }
                else if (money < 100000) {
                    d += n;
                }
                else
                    e += n;
            }
            else if (month1 == 2) {
                int n = 28 - day1;
                if (money < 10000) {
                    a += n;
                }
                else if (money < 20000) {
                    b += n;
                }
                else if (money < 50000) {
                    c += n;
                }
                else if (money < 100000) {
                    d += n;
                }
                else
                    e += n;
            }
            else {
                int n = 30 - day1;
                if (money < 10000) {
                    a += n;
                }
                else if (money < 20000) {
                    b += n;
                }
                else if (money < 50000) {
                    c += n;
                }
                else if (money < 100000) {
                    d += n;
                }
                else
                    e += n;
            }
                
        }
    }
    a += 365 - b + c + d + e;

    answer.push_back(a);
    answer.push_back(b);
    answer.push_back(c);
    answer.push_back(d);
    answer.push_back(e);

    return answer;
}

int solution(int h, int w, int n, vector<string> board) {
    int answer = -1;
    int i = 0;
    int j = 0;
    int cnt = 0;
    int sum = 0;

    //우측, 아래, 우측아래대각선, 좌측아래대각선
    while (i != h && j != w)
    {
        if (board[i][j] == 1) {
            cnt++;
            if (j == w)
                i++;
            else
                j++;
        }
        else {
            if (j == w)
                i++;
            else
                j++;
        }
    }

    return answer;
}

/*purchase	result
["2019/01/01 5000", "2019/01/20 15000", "2019/02/09 90000"]	[315, 9, 11, 20, 10]
["2019/01/30 5000", "2019/04/05 10000", "2019/06/10 20000", "2019/08/15 50000", "2019/12/01 100000"]	[245, 30, 30, 30, 30]*/

/*
가로 4목은 5개, 세로 4목은 1개, 대각선 4목은 4개이므로 4목은 10개입니다. 녹색 사각형으로 표시된 부분은 돌이 5개 연속으로 나열되어 있으므로, 4목으로 취급하지 않습니다.

바둑판의 세로크기 h, 가로크기 w, n목을 정의하는 숫자 n, 바둑판을 나타내는 배열 board가 주어졌을 때, n목의 개수를 return 하도록 solution 함수를 완성해 주세요.

7	9	4	["111100000","000010011","111100011","111110011","111100011","111100010","111100000"]	10
5	5	5	["11111","11111","11111","11111","11111"]	12*/

/*
행을 이동하는 규칙은 다음과 같습니다.

행을 하나 선택합니다.
선택한 행을 오른쪽(또는 왼쪽)으로 한 칸씩 이동합니다.
가장 오른쪽(또는 가장 왼쪽)에 있는 칸은 선택한 행의 반대편 칸으로 이동합니다.
열을 이동하는 규칙은 다음과 같습니다.

열을 하나 선택합니다.
선택한 열을 아래쪽(또는 위쪽)으로 한 칸씩 이동합니다.
가장 아래쪽(또는 위쪽)에 있는 칸은 선택한 열의 반대편 칸으로 이동합니다.
다음 그림은 위 규칙에 따라 1행을 왼쪽으로 한 칸씩 이동시킨 결과를 나타냅니다.

grid	result
[[1,1,1,1],[2,1,2,2],[2,2,2,1],[1,1,2,2]]	5
[[1,1,1,2],[1,1,1,2],[2,2,2,1],[1,2,2,2]]	3*/