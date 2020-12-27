def solution(n):
    answer = 0
    n_arr = list(map(str, str(n)))
    answer = int(''.join(sorted(n_arr, reverse=True)))
    return answer