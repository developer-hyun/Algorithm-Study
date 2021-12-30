#팩토리얼
# import sys
# sys.setrecursionlimit(10**6)  #재귀 깊이 바꾸기 더 많이하게
def facto(n):
    if n==0:
        return 1
    return n * facto(n-1)

N = int(input())
print(facto(N))