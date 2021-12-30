#호텔

num = int(input())

for i in range(num):
    hotel = input()
    hotel = hotel.split(" ")
    H = int(hotel[0]) #층수      3
    W = int(hotel[1])  #방수     5
    N = int(hotel[2]) #손님번후
    #  15개의방  101 201 301 102 202 302 103 203 303 104 204 304 105 105 105 15개
    ho =0
    floor =0
    #층은 손님번호에서 층수를 나누면됨  N/W
    #호수는
    # 아아  몫이 호수  나머지가 층수
    # 근데 꼭대기층이면 몫이호수 H가 층수

    if N % H == 0:  #배수이면
        ho = N // H  # 몫이 호수
        floor = H  #H가 층수

    else: #나머지가 있다면
        ho = N //H +1#몫이 호수
        floor = N%H
    print(str(floor)+"0"+str(ho))


#
# a = 6
# b = 4
# print(a//b)



