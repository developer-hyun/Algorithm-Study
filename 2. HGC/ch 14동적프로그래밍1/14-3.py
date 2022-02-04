#01타일

# n 1 은 1
# n 2 는 2
# n 3 는 3
# n 4 sms 5
# n 5 sms 8
import sys

if __name__ == '__main__':

    N = int(sys.stdin.readline())
    emptyList = [0] * 1000001
    emptyList[1]=1
    emptyList[2]=2
    for i in range(3,N+1):
        emptyList[i] = (emptyList[i-2]+emptyList[i-1])%15746
      #  emptyList.append((emptyList[i-2]+emptyList[i-1])%15746)
    print(emptyList[N])

