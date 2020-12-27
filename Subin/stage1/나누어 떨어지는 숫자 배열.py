def solution(arr, divisor):
    answer = []
    for n in arr:
        if n%divisor ==0:
            answer.append(n)
    if not answer:
        answer.append(-1)
    else:
        answer.sort()
    return answer