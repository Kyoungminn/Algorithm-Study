import math

def solution(n):
    idx = math.ceil(n/2)
    solution = "수박" * idx
    return solution[:n]