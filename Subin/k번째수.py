def solution(array, commands):
    answer = []
    for li in commands:
        i, j, k = map(int, li)
        answer.append(sorted(array[i-1:j])[k-1])
    return answer