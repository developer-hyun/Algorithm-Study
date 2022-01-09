#단어 정렬
import sys

N = int(sys.stdin.readline())

emptyList = []
for i in range(N):
    word = str(sys.stdin.readline().strip())  #개행문자 삭제
    emptyList.append(word)

#print(emptyList)

#중복제거
emptyList = list(set(emptyList))



#이중리스트도 길이를 저장한후 단어저장
wordList=[]
for k in emptyList:  #입력받은 단어들이 들어있는 리스트를 for문으로 가져옴 -> 길이랑 단어랑 이중리스트로 저장하기위해
    wordList.append([len(k),k])

wordList = sorted(wordList)

for j in wordList:  #정렬한 리스트를 for문으로 출력함
    print(j[1])


