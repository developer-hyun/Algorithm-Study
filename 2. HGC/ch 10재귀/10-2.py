#피보나치

def pibo(n):
    if n == 0:
        return 0
    if n ==1 or n==2:
        return 1
    else:
        return pibo(n-1) + pibo(n-2)

N = int(input())
print(pibo(N))
