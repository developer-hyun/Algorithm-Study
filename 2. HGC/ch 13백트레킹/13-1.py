#백트래킹 N과 M


#수열을 나열하는 문제 재귀문제 - DFS - 백트래킹(가지치기)



def backtracking():
    if len(treeList) == M:
        printList1 = printList.append(treeList)
        print(printList1)
       # return printList1

    for i in range(1,N+1):
        if i in treeList:
            continue
        treeList.append(i)
        backtracking()
        treeList.pop()
#
# def print(L):
#     for j in L:
#         print(j[0], j[1])


if __name__ == '__main__':
    import sys

    N, M = map(int, sys.stdin.readline().split())  # N,M받기
    printList=[]
    treeList=[]
    backtracking()
    print(printList)


#지금 pop하면 printList에 들어있는 treeList도 제거가되는데
#이게 del이랑 remove시에도 그런지 확인 ㅍ필요



