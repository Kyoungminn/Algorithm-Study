def solution(n):
    for x in range(1,n+1) :
        if x ** 2 == n :
            return (x+1) ** 2
    return -1