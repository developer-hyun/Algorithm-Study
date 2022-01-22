#포도주맛있겠군

if __name__ == '__main__':
    import sys

    N = int(sys.stdin.readline())
    emtpyList = []
    for i in range(N):
        emtpyList.append(int(sys.stdin.readline()))

        # print(emtpyList)
    saveList = []

    # 첫번째는 1번계단값만
    # 두번째는 1번계단과 2번계단 혹은 1번계단 의 최대값
    if N == 1:
        # 첫번째는 1번계단값만
        saveList.append(emtpyList[0])
    if N == 2:
        # 두번째는 1번계단과 2번계단 혹은 1번계단 의 최대값
        saveList.append(emtpyList[0])
        saveList.append(max(emtpyList[0] + emtpyList[1],emtpyList[0]))

    if N == 3:
        saveList.append(emtpyList[0])
        saveList.append(max(emtpyList[0] + emtpyList[1],emtpyList[0]))
        # 세번째는 1번계단+3번계단 혹은 2번계단 + 3번계단(시작시2칸을뛸수있으므로)      의 최대값
        saveList.append(max(saveList[1],emtpyList[1] + emtpyList[2], emtpyList[0] + emtpyList[2]))
    # print(saveList)
    if N > 3:
        saveList.append(emtpyList[0])
        saveList.append(max(emtpyList[0] + emtpyList[1], emtpyList[1]))
        saveList.append(max(saveList[1], emtpyList[1] + emtpyList[2], emtpyList[0] + emtpyList[2]))
        for j in range(3, N):
            saveList.append(max(saveList[j-1],saveList[j - 3] + emtpyList[j - 1] + emtpyList[j], saveList[j - 2] + emtpyList[j]))

    print(saveList.pop())