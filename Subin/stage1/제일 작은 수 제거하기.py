def solution(arr):
    min_ = min(arr)
    arr.remove(min_)
    if not arr:
        return [-1]
    return arr