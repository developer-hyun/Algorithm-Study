import sys

Count = int(sys.stdin.readline())
for i in range(Count):
    n= int(sys.stdin.readline())
    emptyList=[]
    for j in range(2,n):   #소수를 리스트에 저장하기
        for k in range(2, int(j ** 0.5) + 1):
            if j%k==0:
                break
        else:
            emptyList.append(j)
    #print(emptyList)
    firstList=0
    secondList=0
    minusList=0
    first=0
    if int(n/2) in emptyList:
        print(str(n//2)+" "+str(n//2))
    else:
        for z in emptyList:
            if n-z not in emptyList:
                continue
            else:  #해당원소가 소수리스트에 있다면
                if first ==0:
                    firstList=z
                    secondList=n-z
                    minusList=n-z-z
                    first+=1
                else:
                    minusList2=n-z-z
                    if minusList<=minusList2:
                        pass
                    else:
                        firstList=z
                        secondList=n-z
                        minusList=n-z-z
        print(str(secondList)+" "+str(firstList))
#
# def prime(num):
#     primeList=[]
#     for i in range(2,num):
#         ispr=True
#         for j in range(2,int(i**0.5)+1):
#             if i%j==0:
#                 ispr=False
#                 break
#         if ispr:
#             primeList.append(i)
#     return primeList
#
# Count = int(input())
# for i in range(Count):
#     n= int(input())
#     emptyList=prime(n)
#     #print(emptyList)
#     checkList=[]
#     if int(n/2) in emptyList:
#         print(str(n//2)+" "+str(n//2))
#     else:
#         for z in emptyList:
#             if n-z in emptyList:  #해당원소가 소수리스트에 있다면
#                 if abs((n-z)-z) not in checkList:
#                    checkList.append(abs((n-z)-z))
#                 else:
#                    print(n-z, z)
#                    break

#
# Count = int(input())
# for i in range(Count):
#     n= int(input())
#     emptyList=[]
#     for j in range(2,n):   #소수를 리스트에 저장하기
#         for k in range(2, int(j ** 0.5) + 1):
#             if j%k==0:
#                 break
#         else:
#             emptyList.append(j)
#     #print(emptyList)
#     checkList=[]
#     if int(n/2) in emptyList:
#         print(str(n//2)+" "+str(n//2))
#     else:
#         for z in emptyList:
#             if n-z in emptyList:  #해당원소가 소수리스트에 있다면
#                 if abs((n-z)-z) not in checkList:
#                    checkList.append(abs((n-z)-z))
#                 else:
#                    print(n-z, z)
#                    break




