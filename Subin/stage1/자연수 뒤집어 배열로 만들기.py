def solution(n):
    answer = []
    answer = sol(n)
    return answer

def sol(n):
    if n <= 10:
        return [n]
    return [n%10] + sol(n//10)

# n[::-1] 하면 바로 reverse 되서 반환된다. 0부터 len 까지 -1 간격으로
# 가장 파이썬스럽지만 넘 양아치잖아,,,^^,,
# [::-2] 등도 가능. 기본 파이썬 slicing