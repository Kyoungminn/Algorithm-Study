def solution(s):
    temp = []
    for i in s.split(' '):
        word = ''
        for j in range(len(i)):
            c = i[j].upper() if j % 2 == 0 else i[j].lower()
            word = word + c
        temp.append(word)
    return ' '.join(temp)