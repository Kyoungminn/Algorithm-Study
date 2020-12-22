def solution(s):
    answer = True
    np = 0
    ny = 0
    for l in s:
        if l in "pP":
            np +=1
        if l in "yY":
            ny +=1
    if np != ny:
        answer = False
    return answer