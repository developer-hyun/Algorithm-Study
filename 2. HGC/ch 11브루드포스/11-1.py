#블랙잭
import sys

N,M = map(int,sys.stdin.readline().split()) #파이썬에서는 값을 받을때 readline
#임의의 개수의 정수를 한줄에 입력ㅂ다아 리스트에 저장
data = list(map(int,sys.stdin.readline().split()))
result=[]
#3중for문으로 가장 가까운값을 추출한다.
for i in range(N): #카드의 개수만큼 -> 카드의 개수만큼 for문을 돌아 최대값을 도출해냄
    for j in  range(i+1,N): #첫번째 카드를 제외하고 그 다음 카드부터 더해야함
        for k in range(j+1,N): #첫번째,두번째 카드를 제외하고 그 다음 카드부터 더해야함
            if data[i] + data[j]+ data[k] >M:  #3개의 카드를 더한것이 주어진 M값보다 작을때 추가하고 크면 추가하지않는다.
                continue
            else:
                result.append(data[i] + data[j]+ data[k])
print(max(result)) #리스트값에서 최대값을 출력한다.



