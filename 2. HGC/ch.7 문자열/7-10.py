#체커
#
# wordNumber = int(input())
# result=0
# for i in range(wordNumber):  #리스트로 받아서 뒤문자가 달라지면 해당 단어 뒤부터 그 문자가 있는지 확인하고 없으면 카운트추가
#     word = input()
#     for j in range(len(word)): #월드는 문자
#         if word[j] == word[j+1]: #앞문자와 뒷문자가 같으면 passp
#             pass
#         elif word[j] in word[j+1:]: #문자가 다른데 그 뒤부터 봤을때 있으면 안됨 끝
#             break
#     result+=1
#
# print(result)

wordNumber = int(input())
result=0
for i in range(wordNumber):  #리스트로 받아서 뒤문자가 달라지면 해당 단어 뒤부터 그 문자가 있는지 확인하고 없으면 카운트추가

    word = input()

    for j in range(len(word)): #월드는 문자   #+1해주면 마지막 문자는 index가 넘어가서 같으면 +1
        if j == len(word) -1:
            result+=1
        else:
            if word[j] == word[j+1]: #앞문자와 뒷문자가 같으면 passp
                pass
            elif word[j] in word[j+1:]: #문자가 다른데 그 뒤부터 봤을때 있으면 안됨 끝 이 for문이 끝
                break

print(result)



