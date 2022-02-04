

#회의실배정
import sys

if __name__ == '__main__':

    N = int(sys.stdin.readline())
    roomList=[]
    for i in range(N):
        K,L = map(int,sys.stdin.readline().split())
        roomList.append([K,L])

    roomList.sort(key=lambda x:x[0])  #시작시간을 기준으로 정렬
    roomList.sort(key=lambda x:x[1])  #끝나는시간을 기준으로 정렬
    time =0
    count=0
    for j in range(len(roomList)):
        if roomList[j][0] >= time:  #현재시간이 끝나는시간보다 크거나 같으면
            count+=1
            time = roomList[j][1]
    print(count)



