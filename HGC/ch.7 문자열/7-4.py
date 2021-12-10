inputNum = int(input("테스트 케이스 개수"))

for i in range(inputNum):
        repeatNum = int(input("반복횟수"))
        string = input("문자열")

        for j in range(len(string)):
            print(string[j]*repeatNum)




