//백준 2839번 설탕
/*처음에 5로 나누면 다 딱 맞게 떨어진다고 생각되서 틀렸음
다 나눴을때 딱 안떨어지면 5kg을 하나씩 빼면서 3으로 나눠질때를 찾았음*/

/*
#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int count5, count3;
    count5 = N / 5; //5kg 개수

    while (1)
    {
        if (count5 < 0)
        {
            cout << "-1";
            return 0;
        }
        if ((N - (5 * count5)) % 3 == 0)
        {
            count3 = (N - (5 * count5)) / 3;
                break;
        }
        count5--;
    }
    cout << count5 + count3;
    return 0;

        
    //int N;
    //cin >> N;

    //int count1 = 0;
    //int count2 = 0;

    //count1 = N / 5;
    //count2 = (N % 5) / 3;

    //cout << count1 + count2 << "\n";
}
*/