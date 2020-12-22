def solution(strings, n):
    answer = sorting(strings, n)
    return answer


def sorting(strings, n):
    if len(strings) <= 1:
        return strings
    g = []
    e = []
    s = []
    pivot = strings[len(strings) // 2][n]
    for word in strings:
        if word[n] < pivot:
            s.append(word)
        elif word[n] == pivot:
            e.append(word)
        else:
            g.append(word)
    return sorting(s, n) + sorted(e) + sorting(g, n)
