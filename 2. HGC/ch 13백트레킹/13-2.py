#N과 M(2)


#N과M(1)과 다른점은 이번에는 수열이 오름차순인것만 출력해야한다는것이다.


def backtracking(number):
    if len(treeList) == M:
        print(' '.join(map(str,treeList)))

    for i in range(number,N+1):
        if i in treeList:
            continue

        treeList.append(i)
        backtracking(i+1)
        treeList.pop()



if __name__ == '__main__':
    import sys

    N,M = map(int,sys.stdin.readline().split())
    printList = []
    treeList = []
    backtracking(1)










