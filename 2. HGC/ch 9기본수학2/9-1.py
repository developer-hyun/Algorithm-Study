#소수찾기

N = int(input())
N1 = map(int,input().split())
set =0
for i in N1:
    judge=0
    if i > 1:
        for j in range(2,i):
            if i % j == 0: #나누어 떨어진다
                 judge = 1
        if judge == 0:
            set += 1

print(set)