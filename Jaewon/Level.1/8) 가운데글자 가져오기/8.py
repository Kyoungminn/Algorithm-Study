def solution(s):
    answer = ''
    length = len(s)
    mid = length//2
    print(length//2)
    if length % 2 :
        answer = s[mid]
    else : 
        answer = s[mid-1:mid+1]
    return answer