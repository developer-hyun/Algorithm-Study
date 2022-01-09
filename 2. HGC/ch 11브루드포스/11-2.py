#분해합

#분해합은 어떤 수 N의 N과 N의각 자리수의 합
#245는 245+2+4+5 -> 256
#245는 256의 생성자
#256은 245의 분해합

#문제 -> N의 가장 작은 생성자는?

#N은 어떤수+ 어떤수의 각 자리수
import sys

N = int(sys.stdin.readline())
for i in range(1,N+1): #1부터 입력받은 N까지 출력하기 위해 N+1을 해줌
    num = list(str(i)) #숫자의 각 자릿수가 리스트로 저장 256이면 [2,5,6]으로 저장
    for k in range(len(num)):  #리스트에 string으로 저장했으므로 int로 변환
        num[k] = int(num[k])
    if i+sum(num) == N: #i와 i의 각 자리수값 더한것이 입력받은 N과 같으면 끝
        print(i)
        break
    if i==N: #끝까지 돌았는데도 못찾으면 생성자가 없어서 0
        print(0)
