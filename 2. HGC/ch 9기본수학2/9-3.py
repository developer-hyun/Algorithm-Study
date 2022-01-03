#소인수분해

#
# N = int(input())
# set = 2
# for i in range(2,N+1):
#     if N % i == 0:
#         N = N / 2
#         print(i)
#         continue
#     set +=1

N = int(input())

if N == 1:
    print("")

for i in range(2,N+1):
    if N % i == 0:
        while N % i ==0:
            N = N / i
            print(i)



