def solution(n, m):
    answer = []
    min_ = min(n,m)
    max_ = max(n,m)
    g = sol(min_,max_)
    answer=[g, n*(m//g)]
    return answer

# 유클리드 호제법
# a%b=r (a>b)에 대해 b%r=r', r%r'=r" 를 반복하다가 r%r'=0일 때 r'가 a와 b의 최대공약수
def sol(min_, max_):
    if max_%min_ ==0:
        return min_
    return sol(max_%min_, min_)