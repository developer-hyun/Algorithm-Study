import sys


class Stack:
    def __init__(self):
        self.s = []

    def push(self, item):
        self.s.append(item)

    def isEmpty(self):
        if len(self.s) == 0:
            return 1
        else:
            return 0

    def pop(self):
        if self.isEmpty() == False:
            return self.s.pop(-1) # 꺼내서 리턴
        else:
            return "-1"

    def size(self):
        return len(self.s)

    def peek(self):
        if self.isEmpty() == False:
            return self.s[-1]    # 꺼내지 않고 리턴
        else:
            return "-1"


if __name__ == '__main__':

    N = int(input())
    S = Stack()
    for i in range(N):
        question = sys.stdin.readline().strip()

        if "push" in question:
            S.push(question.split()[1])
           # print(S.s)
        if "top" in question:
            print(S.peek())
        if "size" in question:
            print(S.size())
        if "empty" in question:
            print(S.isEmpty())
        if "pop" in question:
            print(S.pop())




