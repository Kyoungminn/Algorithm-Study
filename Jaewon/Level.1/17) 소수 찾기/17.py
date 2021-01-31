def solution(n):
    solution = []
    arr = [1] * (n+1)
    arr[0], arr[1] = 0, 0
    for i in range(2, n+1):
        if arr[i]:
            solution.append(arr[i])
            for j in range(i, n+1, i):
                arr[j] = 0
    return len(solution)