#동적 뭐시기
#파보나치 계산하기
# import sys
#
#
# def pibo(num,countzero,countone):
#     if (num==0):
#         countzero+=1
#         return 0 , countzero , countone
#     if (num==1):
#         countone+=1
#         return 1 , countzero, countone
#     return pibo(num-1,countzero, countone) + pibo(num-2,countzero, countone)
#
# if __name__ == '__main__':
#
#     N = int(sys.stdin.readline())
#     for i in range(N):
#         countzero=0
#         countone=0
#         num=int(sys.stdin.readline())
#         pibo(num,countzero, countone)
#         print(countzero, countone)

def fibo(num):
    for i in range(3,num+1):
        countzero.append(countzero[i-1]+countzero[i-2])
        countone.append(countone[i-1]+countone[i-2])


if __name__ == '__main__':

    import sys
    N = int(sys.stdin.readline())
    for k in range(N):

        countzero=[1,0,1]
        countone=[0,1,1]
        num = int(sys.stdin.readline())
        fibo(num)
        print(countzero[num], countone[num])




