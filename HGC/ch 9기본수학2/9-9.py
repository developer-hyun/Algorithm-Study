#직각삼각형

set =1
xEmpty = []
yEmpty=[]
zEmpty=[]

while True:
    x,y,z = map(int,input().split())
    if (x==0) and (y==0) and (z==0):
        break
    if x**2+y**2 == (z**2):
        print('right')
    else:
        print('wrong')
#     xEmpty.append(x)
#     yEmpty.append(y)
#     zEmpty.append(z)
#
# for i in range(len(xEmpty)):
#     if (xEmpty[i]**2 + yEmpty[i]**2) == (zEmpty[i]**2) :
#         print("right")
#     else:
#         print("wrong")
#
# while True:
#     nums = list(map(int,input().split()))
#     if sum(nums) == 0:
#         break
#     max_num = max(nums)
#     nums.remove(max_num)
#     if nums[0]**2 + nums[1]**2 == max_num:
#         print('right')
#     else:
#         print('wrong')