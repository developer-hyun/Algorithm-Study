#연산자끼워넣기





def backtracking(minmaxNum,idx):
    if sum(math) ==0:      #math는 연산자의 개수를 나타내는 것인데 이게 0이라는소리는 연산자를 다 사용하였다는 뜻 즉 계산이 끝남
        minmaxList.append(minmaxNum)
        return minmaxNum

    for i in range(len(math)):  #연산자의 길이만큼 for문을 돈다
        if math[i] ==0 :  #해당 연산자가 없으면 다음 연산자로
            continue
        upNum = minmaxNum  #해당 변수가 필요한 이유는 minmaxNum이라는 변수를 계속 재귀로 돌리는데 그렇게되면 상위 재귀에서 minmaxNum의 숫자가 바뀌어서 따로 저장하는 부분이 필요
        if i==0:
            minmaxNum += number[idx+1]
        if i==1:
            minmaxNum -= number[idx+1]
        if i==2:
            minmaxNum *= number[idx+1]
        if i==3:   #나누기인데 음수면 양수로 바꿧다가 그 몫을 음수로
            if minmaxNum >=0:
                minmaxNum = minmaxNum // number[idx+1]
            else:
                minmaxNum = -(abs(minmaxNum) // number[idx+1])

        math[i] = math[i] -1
        backtracking(minmaxNum,idx+1)
        math[i] = math[i] +1
        minmaxNum =upNum


#
#
#
if __name__ == '__main__':
    import sys

    N = int(sys.stdin.readline())
    #  print(3//6)
    #  print(-3//6)
    number = list(map(int, sys.stdin.readline().split()))
    math = list(map(int, sys.stdin.readline().split()))
    minmaxList =[]
    backtracking(number[0],0)
    print(max(minmaxList))
    print(min(minmaxList))




