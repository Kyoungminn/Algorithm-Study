def solution(board, moves):
    answer = 0
    basket = list()

    while moves:
        move = moves.pop(0)
        doll = -1
        for i in range(len(board)):
            if board[i][move-1] != 0:
                doll = board[i][move-1]
                board[i][move-1] = 0
                break
        
        if doll == -1:
            continue
        if not basket:
            basket.append(doll)
        else:
            top = basket[0]
            if top == doll:
                answer += 2
                basket.pop(0)
            else:
                basket.insert(0, doll)
                
    return answer

board = [[0,0,0,0,0],
        [0,0,1,0,3],
        [0,2,5,0,1],
        [4,2,4,4,2],
        [3,5,1,3,1]]

moves = [1,5,3,5,1,2,1,4]

print(solution(board, moves))