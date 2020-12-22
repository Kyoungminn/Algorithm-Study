def solution(d, budget):
    answer = 0
    d.sort()
    for el in d:
        if budget <el:
            return answer
        answer +=1
        budget -= el
    return answer