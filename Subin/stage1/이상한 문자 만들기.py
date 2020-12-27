def solution(s):
    answer = ''
    index = 0
    for w in s:
        if w is ' ':
            index =0
            answer += ' '
        else:
            if index%2 ==0:
                answer += w.upper()
            else:
                answer += w.lower()
            index +=1
    return answer

