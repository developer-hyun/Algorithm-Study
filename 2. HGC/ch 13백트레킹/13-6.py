#스도쿠
import sys

puzzle=[]
for L in range(9):
    puzzle.append(list(map(int,sys.stdin.readline().split())))
#print(puzzle)

#
# row_check = [[0] * 10 for i in range(9)]
# col_check=[[0] * 10 for i in range(9)]
# square_check=[[0] * 10 for i in range(9)]
#
# zero =[]
# zeroCnt = 0
#
# for r in range(9):
#     for c in range(9):
#         if puzzle[r][c] == 0:
#             zero.append((r, c))
#             zeroCnt += 1
#         else:
#             row_check[r][puzzle[r][c]] = 1
#             col_check[c][puzzle[r][c]] = 1
#             square_check[square_num[r][c]][puzzle[r][c]] = 1


row_check = [[0] * 10 for i in range(9)]
col_check = [[0] * 10 for i in range(9)]
square_check = [[0] * 10 for i in range(9)]

# has all positions of empty cell
zero_xy = []
zero_cnt = 0

square_num = [[0, 0, 0, 1, 1, 1, 2, 2, 2],
              [0, 0, 0, 1, 1, 1, 2, 2, 2],
              [0, 0, 0, 1, 1, 1, 2, 2, 2],
              [3, 3, 3, 4, 4, 4, 5, 5, 5],
              [3, 3, 3, 4, 4, 4, 5, 5, 5],
              [3, 3, 3, 4, 4, 4, 5, 5, 5],
              [6, 6, 6, 7, 7, 7, 8, 8, 8],
              [6, 6, 6, 7, 7, 7, 8, 8, 8],
              [6, 6, 6, 7, 7, 7, 8, 8, 8]]

# pre-processing
# - get positions of emtpy cell
# - fill "check" arrays
for r in range(9):
    for c in range(9):
        if puzzle[r][c] == 0:
            zero_xy.append((r, c))
            zero_cnt += 1
        else:
            row_check[r][puzzle[r][c]] = 1
            col_check[c][puzzle[r][c]] = 1
            square_check[square_num[r][c]][puzzle[r][c]] = 1


def back(zi):
    if zi == zero_cnt:
        return True

    r, c = zero_xy[zi]
    for num in range(1, 10):
        # if the 'num' could be inserted at (r, c)
        if row_check[r][num] == 0 and col_check[c][num] == 0 and square_check[square_num[r][c]][num] == 0:
            row_check[r][num] = col_check[c][num] = square_check[square_num[r][c]][num] = 1
            puzzle[r][c] = num

            if back(zi + 1) == True:
                return True

            puzzle[r][c] = 0
            row_check[r][num] = col_check[c][num] = square_check[square_num[r][c]][num] = 0

    return False


back(0)
for O in puzzle:
    print(" ".join(map(str,O)))



