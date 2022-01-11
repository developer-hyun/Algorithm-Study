import sys

N = int(sys.stdin.readline())
empty=[]
for i in range(N):  #입력받은 수를 리스트에 저장
    num = int(sys.stdin.readline())
    empty.append(num)
empty = sorted(empty)  #정렬
for k in empty:  #출력하기
    print(k,end="\n")


