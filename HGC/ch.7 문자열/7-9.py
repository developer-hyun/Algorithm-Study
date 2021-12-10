word = input()

croAlpabat = ["c=","c-","dz=","d-","lj","nj","s=","z="] #이거만 하나로 변경 다른건 어차피 하나
for i in croAlpabat:
    if i in word:
        word = word.replace(i,"^")
print(len(word))
