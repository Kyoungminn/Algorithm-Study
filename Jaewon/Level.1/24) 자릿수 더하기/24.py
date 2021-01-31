def solution(n):
    answer = 0
    Str = str(n)
    for i in range(0, len(Str)):
        answer += int(Str[i])
    return answer