

# 1/1   1/2 2/1   3/1 2/2 1/3   1/4 2/3 3/2 4/1   5/1 4/2 3/3 2/4 1/5

#1/1     1/2 2/1        3/1 2/2 1/3
# 첫번째 하나 두번째 둘 세번째 셋

#홀수는 앞에껀 작아지고 뒤에께 커지고

#짝수는 앞에껀 커지고 뒤에껀 작아지고

#그 숫자는 인덱스 +1
X = int(input())
count = 0   # 인덱스번호를 알기위해 있는것
index  = 0  #몇번째에 속해있는지
while count < X:   #숫자를 초과하면 종료
    index += 1
    count = count + index
#print(index)  #몇번째 인지
#print(count)  # 그 해당 번째의 끝
# index_leftNum = X%index   #해당 속해있는 번호수 중에 몇번째 위치인지
#
# if index % 2 ==0 :
#     first =  1 + index_leftNum
#     second = index - index_leftNum
# else:
#     first = index - index_leftNum
#     second = 1+

count = count - index #그 몇번째 중에 맨 처음부터 시작
if index % 2 == 0: #나머지가 0
    first = X - count
    second = index - first +1
else : #홀수면
    second = X - count
    first = index - second +1
print(str(first)+"/"+str(second))







