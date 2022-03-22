#큐
import sys

#
# class Queue:
#     def __init__(self):
#         self.q = []
#     def push(self,item):
#         self.q.append(item)
#
#     def empty(self,count):
#         if len(self.q)<=count: #마지막께 0이면 빈것
#             return 1
#         else:
#             return 0
#     def pop(self,count):
#         if self.empty(count)==1: #비어있다
#             return -1
#         else:
#             return self.q[count]
#     def size(self,count):
#         return len(self.q[count:])
#
#     def front(self,count):
#         if self.empty(count) == 1:  # 비어있다
#             return -1
#         else:
#             return self.q[count]
#     def back(self,count):
#         if self.empty(count) == 1:  # 비어있다
#             return -1
#         else:
#             return self.q[-1]

if __name__ == '__main__':
    N = int(sys.stdin.readline())
    #
    # Q = Queue()
    # count =0
    # for i in range(N):
    #     question = sys.stdin.readline().strip()
    #
    #     if "push" in question:
    #         Q.push(question.split()[1])
    #     if "pop" in question:
    #         print(Q.pop(count))
    #         count +=1
    #     if "size" in question:
    #         print(Q.size(count))
    #     if "empty" in question:
    #         print(Q.empty(count))
    #     if "front" in question:
    #         print(Q.front(count))
    #     if "back" in question:
    #         print(Q.back(count))

    q = []
    count=0
    for i in range(N):
        question = sys.stdin.readline().strip()
        if "push" in question:
            q.append(question.split()[1])
        if "pop" in question:
            if len(q) <= count:
                print(-1)
            else:
                print(q[count])
                count+=1
        if "empty" in question:
            if len(q) == count: #다음에 pop할 숫자가 없어서 empty상태임
                print(1)
            else:
                print(0)
        if "size" in question:
            print(len(q)-count)
        if "front" in question:
            if len(q) > count:
                print(q[count])
            else:
                print(-1)
        if "back" in question:
            if len(q) > count:
                print(q[-1])
            else:
                print(-1)


