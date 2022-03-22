#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

//dfs: �����̿�, ����Լ�
//bfs,dfs Ÿ�� �ѹ�
void dfs(vector<int> numbers, int target, int sum, int count) {

}

int solution(vector<int> numbers, int target) {
    int answer = 0;



    return answer;
}

//����
int solution(vector<vector<string>> clothes) {
    int answer = 0;
    map<string, int> m;

    //���� ���� ��
    for (auto cloth : clothes) {
        m[cloth[1]] += 1;
    }

    //���� 2, ���� 1�̸� (2+1) * (1+1) - 1
    for (auto it = m.begin(); it != m.end(); it++) {
        answer *= it->second + 1;
    }

    return answer - 1;
}

//���λ�
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

    //����, �Ʒ�, �����Ʒ��밢��, �����Ʒ��밢��
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
���� 4���� 5��, ���� 4���� 1��, �밢�� 4���� 4���̹Ƿ� 4���� 10���Դϴ�. ��� �簢������ ǥ�õ� �κ��� ���� 5�� �������� �����Ǿ� �����Ƿ�, 4������ ������� �ʽ��ϴ�.

�ٵ����� ����ũ�� h, ����ũ�� w, n���� �����ϴ� ���� n, �ٵ����� ��Ÿ���� �迭 board�� �־����� ��, n���� ������ return �ϵ��� solution �Լ��� �ϼ��� �ּ���.

7	9	4	["111100000","000010011","111100011","111110011","111100011","111100010","111100000"]	10
5	5	5	["11111","11111","11111","11111","11111"]	12*/

/*
���� �̵��ϴ� ��Ģ�� ������ �����ϴ�.

���� �ϳ� �����մϴ�.
������ ���� ������(�Ǵ� ����)���� �� ĭ�� �̵��մϴ�.
���� ������(�Ǵ� ���� ����)�� �ִ� ĭ�� ������ ���� �ݴ��� ĭ���� �̵��մϴ�.
���� �̵��ϴ� ��Ģ�� ������ �����ϴ�.

���� �ϳ� �����մϴ�.
������ ���� �Ʒ���(�Ǵ� ����)���� �� ĭ�� �̵��մϴ�.
���� �Ʒ���(�Ǵ� ����)�� �ִ� ĭ�� ������ ���� �ݴ��� ĭ���� �̵��մϴ�.
���� �׸��� �� ��Ģ�� ���� 1���� �������� �� ĭ�� �̵���Ų ����� ��Ÿ���ϴ�.

grid	result
[[1,1,1,1],[2,1,2,2],[2,2,2,1],[1,1,2,2]]	5
[[1,1,1,2],[1,1,1,2],[2,2,2,1],[1,2,2,2]]	3*/