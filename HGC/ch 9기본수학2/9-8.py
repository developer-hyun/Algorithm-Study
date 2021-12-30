#직사각형 좌표 찾기

# 3,3   3,6     4,6    ?,?  -> x가 4  y가 3
# x좌표 y좌표중에 하남나 있는것
xEmpty=[]
yEmpty=[]
for i in range(3):
    x,y = map(int,input().split())
    xEmpty.append(x)
    yEmpty.append(y)
for j in range(3):
    if xEmpty.count(xEmpty[j]) == 1:
        X = xEmpty[j]
    if yEmpty.count(yEmpty[j]) == 1:
        Y = yEmpty[j]
print(str(X)+" "+str(Y))