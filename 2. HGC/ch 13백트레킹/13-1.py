#백트래킹 N과 M


#수열을 나열하는 문제 재귀문제 - DFS - 백트래킹(가지치기)



def backtracking():
    if len(treeList) == M:
        printList.append(copy.deepcopy(treeList))
       # return printList1

    for i in range(1,N+1):
        if i in treeList:
            continue
        treeList.append(i)
        backtracking()
        treeList.pop()

def printResult(L):
    for j in L:
        j = map(str,j)
        print(" ".join(j))


if __name__ == '__main__':
    import sys
    import copy

    N, M = map(int, sys.stdin.readline().split())  # N,M받기
    printList=[]
    treeList=[]
    backtracking()
    printResult(printList)

#deepcopy는 이중배열이상의 부분까지도 깊은복사 copy는  단순 리스트일경우만 깊은복사


#지금 pop하면 printList에 들어있는 treeList도 제거가되는데
#이게 del이랑 remove시에도 그런지 확인 ㅍ필요



