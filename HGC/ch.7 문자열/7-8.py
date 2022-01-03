word = input()

#각숫자 +1 초가 걸린시간
#
# time = {'ABC':3,'DEF':4,'GHI':5,'JKL':6,'MNO':7,'PQRS':8,'TUV':9,'WXYZ':10}
# settime = 0
#
# for i in word:
#     if time.keys()

time = {'A':3,'B':3,'C':3,'D':4,'E':4,'F':4,'G':5,'H':5,'I':5,'J':6,'K':6,'L':6,
        'M':7,'N':7,'O':7,'P':8,'Q':8,'R':8,'S':8,'T':9,'U':9,'V':9,'W':10,
        'X':10,'Y':10,'Z':10}
settime=0
for i in word:
    num = time.get(i)
    settime += num
print(settime)