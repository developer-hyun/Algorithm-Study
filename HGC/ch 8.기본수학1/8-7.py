#사탕가게

#봉지의 최소개수
#3과 5

#5로 나누고 나머지
#6이불가

#5의배수가될때까지 ㅊ자는다

N = int(input())

paper = 0 #봉지
while True:
    if (N % 3 ==0) or (N % 5 ==0) :  #둘다 나누어지면 -1이 아님
        if (N % 5 ==0):
            #print(paper//5)
            paper += (N // 5) #봉지수
            break
        if (N % 3 ==0):
            N -= 3
            paper += 1
    else:
        paper=-1
        break
print(paper)