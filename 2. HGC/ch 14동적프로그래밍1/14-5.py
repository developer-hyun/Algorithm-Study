# 색깔 칠하기 놀이
import sys

if __name__ == '__main__':

    N = int(sys.stdin.readline())
    emptyList=[]
    for i in range(N):
        number = list(map(int,sys.stdin.readline().split()))
        emptyList.append(number)
   # print(emptyList)
    for k in range(1,len(emptyList)):
        emptyList[k][0] = min(emptyList[k-1][1],emptyList[k-1][2]) + emptyList[k][0]
        emptyList[k][1] = min(emptyList[k-1][0],emptyList[k-1][2]) + emptyList[k][1]
        emptyList[k][2] = min(emptyList[k-1][0],emptyList[k-1][1]) + emptyList[k][2]
    print(min(emptyList[N-1][0],emptyList[N-1][1],emptyList[N-1][2]))
