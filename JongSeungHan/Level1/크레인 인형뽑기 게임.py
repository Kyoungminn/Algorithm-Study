def solution(board, moves):

    answer = 0
    basket = []
    top = -1 # 스택의 인덱스

    for move in moves:
        for i in range(len(board)):
            if board[i][move-1] != 0:
                if top == -1:
                    basket.append(board[i][move-1])
                    board[i][move-1] = 0
                    top += 1
                else:
                    basket.append(board[i][move-1])
                    board[i][move-1] = 0
                    if basket[top+1] == basket[top]:
                        basket.pop()
                        basket.pop()
                        answer += 2
                        top -= 1
                    else:
                        top += 1
                break
    return answer

board = [[0,0,0,0,0],
        [0,0,1,0,3],
        [0,2,5,0,1],
        [4,2,4,4,2],
        [3,5,1,3,1]]

moves = [1,5,3,5,1,2,1,4]

print(solution(board, moves))