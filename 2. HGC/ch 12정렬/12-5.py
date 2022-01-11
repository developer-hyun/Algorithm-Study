#소트인사이드
#소드아트온라인

#배열정리

#리스트로받고 해봄
import sys

N = int(sys.stdin.readline())

#map 사용 안할시
#num = list(str(N)) # 213이 들어오면 ['2','1','3']이됨
# for k in range(len(num)):  # 리스트에 string으로 저장했으므로 int로 변환
#     num[k] = int(num[k])

#map 사용 시
num = list(map(int,(str(N))))# 리스트에 string으로 저장했으므로 int로 변환
num = sorted(num,reverse=True)  #내림차순정렬
num = list(map(str,num)) #안에 값이 int이므로 string으로 변환
strA = "".join(num) #리스트를 string형태로 변환
print(strA)



