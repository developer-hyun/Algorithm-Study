#소문자 단어 s? ?
#알파벳 a-z 돌려서 해당하는 단어가 있으면 그 때 찾고 위치 도출
import string

# word = input()
# alpa = string.ascii_lowercase
# emptyString = ""
# #print(alpa)
# for i in range(len(alpa)):
#
#     for j in range(len(word)):
#
#         if (alpa[i] == word[j]):   #소문자끼리 맞으면 word의 위치 및 word 에서 해당단어를 삭제해아함 j의 위치저장
#             emptyString += str(j)+" "
#             word2 = word.replace(word[j],"")  #해당단어삭제
#     emptyString += "-1 "
#
# print(word)
# print(emptyString)

word = input()
alpabat = string.ascii_lowercase
emptyString = ""
for i in alpabat:
     if i in word:
          emptyString += str(word.index(i)) + " "
     else:
          emptyString += "-1 "
print(emptyString)




#
# a= input()
# i=2
# a= a.replace(a[2],"")
# print(a)



