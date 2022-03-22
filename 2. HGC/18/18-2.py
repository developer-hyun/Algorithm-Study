#이분탐색


#반으로 쪼개서
#정렬 후 처음 위치와 다음값의 위치의 차이
import sys

N = int(input())
nNumber=list(map(int,sys.stdin.readline().split()))
M=int(input())
mNumber=list(map(int,sys.stdin.readline().split()))
nNumber.sort()

def bigLocation(index):
    start=0
    end=N   #원래는 N-1이지만 구하는 숫자가 리스트에 마지막에 있을경우를 위해서 N으로해줌
    while start<end:   #<= 즉, start와 end가 같은 경우를 찾지 않는 이유 -> 타겟의 값을 찾는것이 아니라 그 다음값의 인덱스를  찾는것이기때문에 start=end의 경우까지 찾으면 start가 end를 넘어버림
        mid = (start+end)//2
        if nNumber[mid]<=index: #타겟보다 작거나 같으면 해당위치(nNumber[mid])는 필요없으므로 시작(start)를 다음위치로해줌  # 같은 경우까지 해준 이유는 여러개가 반복될경우 같을때도 함수가 실행되어 같은것들중 가장 마지막꺼로 위치를 이동함
            start = mid +1
        else:  #타겟보다 크면 좌측을 찾아야하므로 end를 mid로 해줌
            end =mid
    return end

def sameLocation(index):
    start=0
    end=N
    while start<end:
        mid = (start+end)//2
        if nNumber[mid] < index:   #타겟보다 작거나 같으면 해당위치(nNumber[mid])는 필요없으므로 시작(start)를 다음위치로해줌 #같은 경우를 하지 않은 이유는 타겟과 똑같은 숫자가 여러개 반복될경우 그 전에 작은 숫자에서 인덱스+1을 해줌
            start =mid+1
        else:
            end=mid
    return end

empty=[]
for i in mNumber:
    empty.append(bigLocation(i)-sameLocation(i))
print(*empty)






