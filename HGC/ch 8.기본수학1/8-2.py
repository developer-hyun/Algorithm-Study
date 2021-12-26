#벌집
#인접은 6개

# 1 / 2 3 4 5 6 7 / 8 9 10 11 12 13 / 14 15 16 17 18 19 /
#58 -1 /6    57 /6

# 첫칸 최대 1     둘째칸 최대 7   셋째칸 최대 19  넷째칸 최대 37 다섯째 61

# 1   6차이   7     12차이   19     18차이  37      24차이  61
#6증가 ok

num = int(input())

room=1
maxnum = 1
radio = 6
if (num ==1):
    room =1

else:
    while True:
        room += 1  # 방이 하나 건너옴
        maxnum = maxnum + radio   # 방마다 최대숫자 radio 는 6,12,18,24 가됨
     #   print(maxnum)
        if maxnum >= num:
            break
        radio += 6 #6개씩 늘어남

print(room)

