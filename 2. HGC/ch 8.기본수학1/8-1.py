Cost = input()

cost = Cost.split(" ")
A = int(cost[0])
B = int(cost[1])
C = int(cost[2])
#staticCost = int(input())
#changeCost = int(input())
#totalCost = int(input())
plus = 0
n = 0
# while True:
# #for i in range(15):
#     # t = ((C - B) * n) - A
#     # print(t)
#     # print(n)
#     if ((C - B) * n) - A <= 0:
#         n += 1
#         continue
#     elif ((C - B) * n) - A > 0:
#         print("1")
#         break
#     elif B >= C:
#         n = -1
#         break
#
# print(n)
#
# while True:
# #for i in range(15):
#     # t = ((C - B) * n) - A
#     # print(t)
#     # print(n)
#     if B >= C:
#         n = -1
#         break
#     elif (((C - B) * n) - A <= 0):
#         n += 1
#         continue
#     elif (((C - B) * n) - A > 0):
#         print("1")
#         break
#
# print(n)

n = (A // (C-B) +1)
while True:
    if B >= C:
        print(-1)
        break
    else:
        print(n)
        break



