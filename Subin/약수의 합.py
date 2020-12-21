def solution(n):
    answer = 0
    li=[]
    for i in range(1,n+1):
        if n%i ==0:
            li.append(i)
    answer = sum(li)
    return answer