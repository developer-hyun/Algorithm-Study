#괄호


N = int(input())

for i in range(N):
    number = input()
    s = []
    for j in number:
        if s:
            if j == '(':
                s.append(j)
            elif j == ')':
                if s[-1] == '(':
                    s.pop()
                else:
                    s.append(j)
        else:
            s.append(j)
    if s:
        print("No")
    else:
        print("YES")