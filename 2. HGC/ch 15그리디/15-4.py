#잃어버린 괄호


#괄호를 쳐서 값을 최소로만들어야한다!!!!

#그러면 어떻게 해야할까

#마이너스랑 플러스


#마이너스 뒤에꺼는 다 더한다

if __name__ == '__main__':
    import sys
    num = input().split("-")
    firstNum=0
    #print(num)
    # if len(num) ==1:  #전부다 더하기
    #     for k in num[0].split("+"):
    #         firstNum += int(k)
 #   else:

    for k in num[0].split("+"):   #"-" 앞에 숫자들을 다 더함!
        firstNum += int(k)

    for i in num[1:]:   #"-" 가 나오면 다음 마이너스 전까지 모든 숫자들을 +로 split하여 더함
        plusSplit =i.split("+")

        for j in plusSplit:
            firstNum -= int(j)
    print(firstNum)
