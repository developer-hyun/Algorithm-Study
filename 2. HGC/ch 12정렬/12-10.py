#좌표압축


#for문으로 비교해서 큰거만 리스트에 추가한다
# import sys
#
# N = int(sys.stdin.readline())
# spot=list(map(int,sys.stdin.readline().split()))  #스페이스 단위로 잘라서 리스트에 넣는다
#
# #print(spot)
#
# empty=[]
# for i in spot:
#     count = 0
#     for j in spot:
#         if i>j:  #해당 좌표보다 작으면  count를 하나 추가
#             count+=1
#     empty.append(str(count))  #최종 count숫자를 리스트에 저장
#
# print(' '.join(empty))

import sys

N = int(sys.stdin.readline())
spot=list(set(map(int,sys.stdin.readline().split())))  #스페이스 단위로 잘라서 리스트에 넣는다

#print(spot)

empty=[]
for i in spot:
    count = 0
    for j in spot:
        if i>j:  #해당 좌표보다 작으면  count를 하나 추가
            count+=1
    empty.append(str(count))  #최종 count숫자를 리스트에 저장

print(' '.join(empty))




