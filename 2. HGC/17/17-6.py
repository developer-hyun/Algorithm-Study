class Dequeue:
    def __init__(self):
        self.dq = []

    def insertFirst(self, item):
        self.dq.insert(0, item)

    def insertLast(self, item):
        self.dq.append(item)

    def isEmpty(self):
        if len(self.dq) > 0:
            return False
        else:
            return True

    def popFirst(self):
        return self.dq.pop(0)

    def popLast(self):
        return self.dq.pop(-1)

    def peekFirst(self):
        return self.dq[0]

    def peekLast(self):
        return self.dq[-1]

    def print(self):
        print(self.dq)

    def sum(self):
        return sum(self.dq)