#동전 0
#동전개수의최대
# import sys
#
# if __name__ == '__main__':
#
#     #N은 개수 K의 값의합
#     N,K = map(int, sys.stdin.readline().split())
#
#     coinList=[]
#     for i in range(N):
#         coin = int(sys.stdin.readline())
#         coinList.append(coin)
#
#     coinList.reverse()
#     #print(coinList)
#     count=0
#     for j in range(len(coinList)):
#         while True:
#             if K < coinList[j]:
#                 break
#             K -= coinList[j]
#             count+=1
#
#     print(count)

import sys

if __name__ == '__main__':

    # N은 개수 K의 값의합
    N, K = map(int, sys.stdin.readline().split())

    coinList = []
    for i in range(N):
        coin = int(sys.stdin.readline())
        coinList.append(coin)

    coinList.reverse()
    # print(coinList)
    count = 0
    for j in range(len(coinList)):
        num = K//coinList[j]
        K -= coinList[j]*num
        count += num

    print(count)


