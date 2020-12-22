def solution(n):
    answer = sol(n)
    return answer

def sol(n):
    if n<10:
        return n
    return n%10 + sol(n//10)