#뭐꼬이건

#
num = int(input())
for i in range(num):
    x,y = map(int,input().split(" "))
    #거리는 y-x
    #마지막과 마지막 전에는 무조건 1이니까 거리에서 -2하고 횟수 +2
    dis = y-x
    count =0
    # # for j in range(dis-1):
    # #     print("도착")
    # #     count +=1
    #
    # print(count)
    #
# 1 - 1
# 2 - 1-1
# 3 - 1-1-1
# 4 - 1-2-1
# 5 - 1-2-1-1
# 6 - 1-2-2-1
# 7 - 1-2-1-2-1
# 8 - 1-2-2-2-1
# 9 - 1-2-3-2-1
# 10 -1-2-2-2-2-1

# 1 /  1  /  2   / 2  3  /3  4/  4
#두번씩?
    div = 0.5
    now_distance =0
    while dis>now_distance:
        div = div + 0.5
        now_distance = now_distance + div
        count += 1
    print(count)

