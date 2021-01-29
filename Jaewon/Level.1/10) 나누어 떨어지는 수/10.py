def solution(arr, divisor):
    answer = []
    for n in arr:
        if(n % divisor == 0):
            answer.append(n)
    return sorted(answer) or [-1]