import math

num = input()

num = num.split(" ")
A = int(num[0])   #올라가는 높이
B = int(num[1])  #미끄러지는 높이
V = int(num[2])  #나무 미터
#
# day =0
# while True:
#     if (V<=(A-B)*day):
#         break
#     else:
#         day +=1
#
# print(day-1)

#거리는 a - b
#마지막날에 안미끄러진다... 그러면 총 거리에서 마지막걸 빼면  마지막날 오른거까지가 됨. v-b
# 아 얘를 거리로 나누념
day = (V-B) / (A-B)
#print(day)  #4.0
print(math.ceil(day))
