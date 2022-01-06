#하노이탑 이동

#

def hano(n,a,b,c):
    if n==1:
        move.append([a,c])
    else:
        hano(n-1,a,c,b)
        move.append([a,c])
        hano(n-1,b,a,c)

move=[]
hano(int(input()),1,2,3)
print(len(move))
print(move)


