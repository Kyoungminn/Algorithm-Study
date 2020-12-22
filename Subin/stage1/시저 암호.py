def solution(s, n):
    answer = ''
    lower = 'abcdefghijklmnopqrstuvwxyz'
    upper = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    for l in s:
        if l.islower():
            i = lower.index(l)
            answer += lower[(i+n)%26]
        elif l.isupper():
            i = upper.index(l)
            answer += upper[(i+n)%26]
        else:
            answer += ' '
    return answer