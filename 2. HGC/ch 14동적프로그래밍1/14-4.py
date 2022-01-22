#삼각형 만들기
import sys

if __name__ == '__main__':

    emptyList=[1,1,1,2,2]
    for k in range(5,100):
        emptyList.append(emptyList[k-1]+emptyList[k-5])

    N = int(sys.stdin.readline())

    for i in range(N):
        number = int(sys.stdin.readline())
        print(emptyList[number-1])
