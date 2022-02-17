#이분탐색

#반으로 쪼개서 탐색
import sys

def search(numberList,start,end,number):
    while start<=end:  #시작점과 끝점이 만나는지점이 정답일수 있기때문에 둘다 같을 경우까지
        mid = (start+end)//2 #이분탐색은 중간지점을 정한후 움직여야함
        if numberList[mid]==number: #타겟(number)가 해당리스트에 있으면 1(true)반환
            return 1
        elif numberList[mid]<number: #타겟(number)가 해당리스트보다 크면 우측 탐색
            start = mid+1 #시작점을 우측으로 이동
        else:
            end =mid-1 #끝점을 좌측으로 이동
    return 0

N = int(input())
nNumber = list(map(int,sys.stdin.readline().split()))
M = int(input())
mNumber = list(map(int,sys.stdin.readline().split()))
nNumber.sort() #정렬
for i in mNumber:
    if search(nNumber,0,N-1,i) ==1:
        print(1)
    else:
        print(0)

