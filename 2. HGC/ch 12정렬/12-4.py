#통계학

#신슬
#중앙
#최빈 #단 여러개면 처빈값중 두번째로 작은값
#범위
import sys
from collections import Counter
N = int(sys.stdin.readline())
empty=[]
for i in range(N):
    num = int(sys.stdin.readline())
    empty.append(num)

sortedEmpty=sorted(empty) #정렬한것

print(round(sum(empty)/len(empty))) #산술평균
print(sortedEmpty[len(empty)//2]) #중앙값
#
# #여러개일려면 리스트를 sort후 count한게 첫번째랑 두번째랑 같으면됨.
mode = Counter(sortedEmpty).most_common()
if len(sortedEmpty)>1:
    if mode[0][1] == mode[1][1]:
        mod = mode[1][0]
    else:
        mod = mode[0][0]
else:
    mod = mode[0][0]
print(mod) #최빈값
print(max(empty)-min(empty)) # 범위
# if Counter(sortedEmpty).most_common(2)[0][1] == Counter(sortedEmpty).most_common(2)[1][1]:
#     order= Counter(sortedEmpty).most_common()
#     maxi = order[0][1]
#     mode=[]
#     for number in order:
#         if number[1] == maxi:
#             mode.append(number[0])
#     sortedMode = sorted(mode)
#     print(mode[1])
# else:
#     print(Counter(empty).most_common(1)[0][0])
#
