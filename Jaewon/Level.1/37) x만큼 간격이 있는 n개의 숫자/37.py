def solution(x, n):
    if x != 0:
        answer = list(range(x, x*n+x, x))
    else: answer = [0] * n
    return answer