#베르트랑 공준

while True:
    n = int(input())
    set=0
    if n == 0:
        break
    for i in range(n,2*n+1):
        if i ==1:
            continue
        for j in range(2,int(i**0.5)+1):
            if i % j ==0:
                break
        else:
            set+=1
    print(set)

#for else 문은 for문이 break문을 만나지않고 수행되어야 else문싱행.



#
# if i == 1:
#     continue
# for j in range(2, int(i ** 0.5) + 1):
#     if i % j == 0:
#         break
# else:
#     print(i)