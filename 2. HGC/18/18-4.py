


import sys
N, M = map(int, sys.stdin.readline().split())
trees = list(map(int, sys.stdin.readline().split()))
def solve():
    lowest, highest = 0, max(trees)
    while lowest != highest:
        middle = (lowest + highest + 1)//2
        bring = sum([(h - middle if h > middle else 0) for h in trees])
        if bring >= M:
            lowest = middle
        else: highest = middle - 1
        return highest


N, M = map(int, input().split())
trees_length = list(map(int, input().split()))
max_tree = max(trees_length)

start = 1
end = max_tree

while start <= end:
    mid = (start + end) // 2
    log = 0

    for i in trees_length:
        if i >= mid:
            log += i - mid

    if log >= M:
        start = mid + 1
    else:
        end = mid - 1

print(end)
