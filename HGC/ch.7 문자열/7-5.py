word = input().upper()
#print(word) #대문자

compare = True
result = ""
setword = list(set(word))
cnt = 0
#print(setword) #중복제거

for i in setword:
    #print(i)
    comparecnt = cnt  # 비교 단어수 전 글자 단어수
  #  print(comparecnt)
    cnt = word.count(i)  #단어수 cnt
  #  print(cnt)
  #  print(cnt)
    if (comparecnt > cnt) :    # 전 글자가 크면 전글자 그대로
        pass
        cnt =comparecnt
    elif(comparecnt < cnt) : #현재 글자가 크면 현재 글자로 변환
        result = i
        compare = True
    elif(comparecnt == cnt) :            #전 글자수랑 현재 글자수랑 같다면 전 글자수로 냅두는데 false로 해주고 false면 ? 를주고 그게 아니라 달라지면 true로 바꿔서
        compare = False



if (compare == False):
    result = "?"

print(result)






