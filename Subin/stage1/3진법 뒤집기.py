def solution(n):
    answer = 0
    three_ = three(n)
    three_ = reversed(three_)
    arr = map(int, three_)
    for ind, el in enumerate(arr):
        answer += el * 3**ind
    return answer

def three(n):
    if n <= 2:
        return str(n)
    return str(n%3) + three(n//3)