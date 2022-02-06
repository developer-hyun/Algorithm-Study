# 주요소




if __name__ == '__main__':
    import sys

    N = int(sys.stdin.readline())
    roadLength = list(map(int,input().split()))
    oilCost = list(map(int,input().split()))

    minCost = roadLength[0]*oilCost[0]  #첫번째꺼의 비용
    currentCost=oilCost[0]

    for i in range(1,N-1):
        if oilCost[i] < currentCost:  #여태까지 채워온 주유소가격(현재주유소가격)과 도착한곳의 주유소가격을 비교해서 도착한곳이 더 작으면
            currentCost = oilCost[i]  #현재 주유소 가격은 도착한곳의 주유소 가격으로 바꾼다
        minCost += currentCost*roadLength[i]  #앞으로 한칸 갈 정도의 도로길이는 현재주유소 가격으로 계산한다

    print(minCost)
