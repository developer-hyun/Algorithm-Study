






if __name__ == '__main__':
    import sys
    N = int(sys.stdin.readline())
    count=[0]*(N+3)
    count[1]=0
    count[2]=1
    count[3]=1
    for i in range(4,N+1):
        number=10**6
        if i%3==0:
            number = count[i//3]
        if i%2==0:
            number = min(count[i//2],number)
        count[i] = min(count[i-1],number)+1
    print(count[N])


