#나이순 정렬


#나이 순을 정렬함 두번째 인덱스값은 정렬하지않음
import sys

N = int(sys.stdin.readline())

empty=[]
for i in range(N):  #이중리스트로 나이와 이름을 저장
    age,name = sys.stdin.readline().split()
    empty.append([int(age),name])

#print(empty)


empty = sorted(empty,key=lambda  x:x[0])  #이렇게 하면 나이순으로만 정렬되고 이름은 입력받은 순으로 들어감

#print(empty)


for k in empty:  #출력하기
    print(k[0], k[1])


