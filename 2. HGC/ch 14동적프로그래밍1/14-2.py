import sys


def w(a,b,c):
    # if emptyList[a][b][c] != 0:
    #     return emptyList[a][b][c]
    if a<=0 or b<=0 or c<=0:
        return 1
    elif a>20 or b>20 or c>20:
        return w(20,20,20)
    if emptyList[a][b][c] != 0:
        return emptyList[a][b][c]
    elif a<b and b<c:
        emptyList[a][b][c] = w(a,b,c-1) + w(a,b-1,c-1) - w(a,b-1,c)
        return emptyList[a][b][c]
    else:
        emptyList[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1)
        return emptyList[a][b][c]



if __name__ == '__main__':

  #  N = int(sys.stdin.readline())
    emptyList=[]
    number=0
    for i in range(21):
        outside=[]
        for k in range(21):
            inside=[]
            for j in range(21):
                inside.append(number)
            outside.append(inside)
        emptyList.append(outside)
   # print(emptyList)

    while True:
        a,b,c = map(int,sys.stdin.readline().split(" "))
        if a == -1 and b==-1 and c== -1:
            break
      #  w(a,b,c)
        print("w("+str(a)+", "+str(b)+", "+str(c)+") = "+str(w(a,b,c)))
     #   print(emptyList[a][b][c])

   # ww =[[[0]*21 for i in range(21)] for k in range(21)]
   # print(ww)
