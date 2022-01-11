#영화감독 숌


#종말의 숫자는 666  666 1666 2666 3666

#N번째 영화에 제목에 들어간 숫자 -> N번째로 작은 종말의 숫자
import sys

N = int(sys.stdin.readline())
firstNum=666
secondNum=1666
thirdNum=2666  #종말의 숫자
count=2  #N번째를 알기위한 수
while True:  #while문으로 계속 탐색
    if N==1:  #1일때 666출력  1과 2로 나눈이유는 굳이 1부터 돌필요가없어서
        print(firstNum)
        break
    elif N==2:  #2일때 1666출력
        print(secondNum)
        break
    if "666" in str(thirdNum):  #숫자가 계속 돌다가 666이 있으면 종말의 숫자가 올라간거임
        count +=1
    if count ==N:  #N번째(종말의수-count)가 입력받은 N과 같으면 하나씩 더해주었던 thirdNum을 출력하고 종료
        print(thirdNum)
        break
    thirdNum += 1
