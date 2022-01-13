#N과M(3)

#N과M 1이랑 2와 다른점은  중복을 허용한다는것이다


def backtracking():
    if len(treeList) == M:
        print(' '.join(map(str,treeList)))
        return

    for i in range(1,N+1):
        treeList.append(i)
        backtracking()
        treeList.pop()



if __name__ == '__main__':
    import sys

    N,M = map(int,sys.stdin.readline().split())
    printList = []
    treeList = []
    backtracking()