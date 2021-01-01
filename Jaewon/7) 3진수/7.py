def solution(n):
    threeNum = ''
    while n > 0:
        threeNum += str(n%3)
        n = n//3
    answer = 0
    count = 1

    for eachChar in reversed(threeNum):
        answer += count * int(eachChar)
        count *= 3

    return answer