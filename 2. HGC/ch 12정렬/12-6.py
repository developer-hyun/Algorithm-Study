#좌표정렬하기
import sys
#이중리스트

N = int(sys.stdin.readline())
empty=[]
for i in range(N):
    x,y = map(int,sys.stdin.readline().split())
    empty.append([x,y])

empty = sorted(empty) #정렬하기
#print(empty) #확인

for k in empty:  #이중리스트를 for문으로 불러와서 출력
    print(k[0], k[1])