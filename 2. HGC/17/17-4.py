
import sys
from collections import deque

N = int(input())
for i in range(N):
    n,m = map(int,input().split())
    q = deque(list(map(int,sys.stdin.readline().split())))
    count=0
    while q:
        maxNumber = max(q)
        nowQNumber = q.popleft()
        m -=1 # 내 위치가 하나를 빼서 앞당겨짐

        if maxNumber == nowQNumber:
            count +=1
            if m<0:
                print(count)
                break
        else:
            q.append(nowQNumber)
            if m<0:
                m = len(q) -1 #맨뒤로 이동하면 m값을 조정해줘야함


