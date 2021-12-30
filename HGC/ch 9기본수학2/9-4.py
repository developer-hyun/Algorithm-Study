
# n = 100
# a=[]
# for i in range(2,n+1):
#     for j in range(2,i):
#         if i%j == 0:
#             break
#     else:
#         a.append(i)
#
# M , N = map(int,input().split())
# a = [False]*(M) + [True]*(N-M)
# prime=[]
# for i in range(M,N+1):
#     if a[i]:
#         prime.append(i)
#     for j in range(2*i,N+1,i):
#         a[j] = False
# print(prime)
# M , N = map(int,input().split())
# for i in range(M,N+1):
#     pr = True
#     if i ==1:
#         pr = False
#     else:
#         for j in range(2,i):
#             if i%j ==0:
#                 pr=False
#                 break
#     if pr:
#         print(i)



M , N = map(int,input().split())

for i in  range(M,N+1):  #M부터 N까지
    if i == 1:
        continue
    for j in range(2,int(i**0.5)+1):
        if i%j==0:
            break
    else:
        print(i)

#
#print(int(3.56))