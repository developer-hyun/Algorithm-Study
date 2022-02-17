#이분탐색


#반으로 쪼개서
#정렬 후 처음 위치와 다음값의 위치의 차이
import sys

N = int(input())
nNumber=list(map(int,sys.stdin.readline().split()))
M=int(input())
mNumber=list(map(int,sys.stdin.readline().split()))

def bigLocation(index):
    start=0
    end=N-1
    while start<=end:
        mid = (start+end)//2
        if nNumber[mid]<=index: #타겟보다 작거나 같으면 해당위치(nNumber[mid])는 필요없으므로 시작(start)를 다음위치로해줌
            start = mid +1
        else:  #타겟보다 크면 좌측을 찾아야하므로 end를 mid로 해줌
            end =mid
    return end

def sameLocation(index):
    start=0
    end=N-1
    while start<=end:
        mid = (start+end)//2
        if nNumber[mid] < index:
            start =mid+1
        else:
            end=mid
    return end

empty=[]
for i in mNumber:
    empty.append(bigLocation(i)-sameLocation(i))
print(*empty)






