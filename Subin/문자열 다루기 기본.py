def solution(s):
    if len(s) !=4 and len(s) != 6:
        return False
    num = '1234567890'
    for l in s:
        if l not in num:
            return False
    return True