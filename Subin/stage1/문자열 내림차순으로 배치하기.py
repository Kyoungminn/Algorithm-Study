def solution(s):
    answer = ''
    low = []
    capital = []
    for l in s:
        if l.isupper:
            capital.append(l)
        else:
            low.append(l)
    low.sort(reverse=True)
    capital.sort(reverse=True)
    for l in low:
        answer+=l
    for l in capital:
        answer +=l
    return answer