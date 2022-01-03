#스타 ㅌ터렛

#a의좌표 x1,y1
#b의좌료 x2,y2

#마린과 a의 거리 r1
#마린과 b의 거리 r2

#마린의 좌표의 수
#좌표랑 거리는 어떻게 구하느냐 -

# r 은 A와  B의 거리
#가용범위생각
import math

N = int(input())
for i in range(N):
    x1,y1,r1,x2,y2,r2 = map(int,input().split())

    r = math.sqrt((x1-x2)**2 + (y1-y2)**2) #터렛좌표 사이의 거리
    if (r !=0) and (r<r1+r2) and (r>abs(r1-r2)) : #떨어져있다 2개
        print(2)
    if (r!=0) and (r>r1+r2) and (r<abs(r1-r2)):  #아예범위밖
        print(0)
    if (r != 0) and (r > r1 + r2):  # 아예범위밖
        print(0)
    if (r != 0) and (r < abs(r1 - r2)):  # 아예범위밖
        print(0)

    if (r !=0) and ((r==r1+r2) or (r==abs(r2-r1))): #같은 선상위
        print(1)
    if (r==0) and (r1 != r2):
        print(0)
    if (r==0) and (r1==r2):
        print(-1)
