def solution(x):
    st = str(x)
    a = 0
    for i in range(len(st)):
        a += int(st[i])

    return True if x%a == 0 else False