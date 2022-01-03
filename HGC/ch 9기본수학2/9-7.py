N = input()
x,y,w,h = map(int,N.split())

# 1) 직사각형의 높이 - y좌료
# 2) 직사각형의 가로 - x좌표
# 3) x 자제 - 0에서출발하므로
# 4) y 자체 - 0에서 출발하므로
#이중최소
empty_list = [h-y,w-x,x,y]
print(min(empty_list))
