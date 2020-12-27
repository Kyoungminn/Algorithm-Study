def solution(n, lost, reserve):
    answer = n - len(lost)
    rem=[]
    for l in lost:
        if l in reserve:
            answer +=1
            rem.append(l)
    for r in rem:
        reserve.remove(r)
        lost.remove(r)
    for l in lost:
        if l-1 in reserve:
            answer +=1
            reserve.remove(l-1)
        elif l+1 in reserve:
            answer +=1
            reserve.remove(l+1)
    return answer