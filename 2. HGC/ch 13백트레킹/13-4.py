#N과M(4)

#1,2,3 과 다른점은



def backtracking(number):
    if len(treeList) == M:
        print(' '.join(map(str,treeList)))
        return

    for i in range(number,N+1):
        treeList.append(i)
        backtracking(i)
        treeList.pop()



if __name__ == '__main__':
    import sys

    N,M = map(int,sys.stdin.readline().split())
    printList = []
    treeList = []
    backtracking(1)