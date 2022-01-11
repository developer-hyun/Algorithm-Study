#덩치 우어

#덩치를 키와 몸무게로 등수로 한다.
import sys
empty = [] #몸무게와 키를 이중 리스트로 받기 위한 빈 리스트
N = int(sys.stdin.readline()) #사람 명수
for i in range(N):
    x,y = map(int,sys.stdin.readline().split()) #x는 몸무게 y는 키
    empty.append([x,y])

for j in range(len(empty)): #몸무게와 키가 들어있는 이중배열 리스트를 길이만큼 돌림-> 해당몸무게와 키가 몇등인지 알기위해
    rank=1
    for k in range(len(empty)): #해당 인덱스 몸무게 키와 나머지 몸무게키를 비교함
        if empty[j][0] < empty[k][0] and empty[j][1] < empty[k][1]: #랭크가 떨어지면 랭크 +1해줌
            rank += 1
    print(rank,end=" ") #출력


