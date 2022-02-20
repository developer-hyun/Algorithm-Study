#AC

#에이씨! ㅍ
import sys
from collections import deque
N =int(input())

for i in range(N):
    func = sys.stdin.readline().rstrip()
    number = int(input())
    q = deque(sys.stdin.readline().rstrip()[1:-1].split(","))
    if number==0:
        q =deque()

    point=0
    cnt=0
    for j in func:
        if j=="R":
             if cnt+1<=len(func):
                 if func[cnt] != func[cnt+1]:
                    q.reverse()
            #print(q)
        cnt += 1
        if j=="D":
            if q:
                q.popleft()
            else:
                print("error")
                point=1
                break
    if point==0:
        print("["+",".join(q)+"]")
