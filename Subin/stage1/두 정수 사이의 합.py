def solution(a, b):
    if a == b:
        return a
    answer = 0
    for n in range(min(a,b), max(a,b)+1):
        answer += n
    return answer