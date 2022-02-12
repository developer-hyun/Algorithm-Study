#위치 계산필요


from collections import deque

n,m = list(map(int,input().split()))
find = list(map(int,input().split()))
q= deque()
for j in range(1,n+1):
    q.append(j)
count =0

#print(q)

for i in find:
    #print(i)
    while True:
        if q.index(i) ==0: #인덱스 위치를 반환 0 이라는 소리는 맨앞에 있다는 뜻
            q.popleft()
            break
        if q.index(i) <= len(q) - q.index(i): #양 끝에서 어느쪽에 가까운지 -> 왼쪽에 더 가깝다면
            q.append(q.popleft())
            count +=1
        else:
            q.appendleft(q.pop())
            count +=1
print(count)




