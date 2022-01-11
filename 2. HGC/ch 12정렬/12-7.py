#수 정렬하기 2

#y값을 기준으로 정렬
import sys

N = int(sys.stdin.readline())
empty=[]
for i in range(N):
    x,y = map(int,sys.stdin.readline().split())
    empty.append([x,y])

#print(empty)
#sort는 리스트를 변경   #sorted는 리스트를 생성  #sort를 하면 리스트.sort #sorted는 새로운변수생성해야함
empty.sort(key=lambda x: (x[1],x[0]))

#
for k in empty:  #이중리스트를 for문으로 불러와서 출력
    print(k[0], k[1])