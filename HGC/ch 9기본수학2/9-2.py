#소수 최솟값 및 더하기

#N, M = map(int,input())

M = int(input())
N = int(input())
empty_list=[]
for i in range(M,N+1):
    judge=0
    if i>1:
        for j in range(2,i):
            if i % j == 0:
                judge =1
                break
        if judge == 0:
            empty_list.append(i)
if len(empty_list) >0:
    print(sum(empty_list))
    print(min(empty_list))
else:
    print(-1)