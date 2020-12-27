def solution(x):
    sum_ = sum(map(int, str(x)))
    if x%sum_==0:
        return True
    else:
        return False