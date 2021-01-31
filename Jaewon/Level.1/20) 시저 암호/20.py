def solution(s, n):
    result = []
    lower = "abcdefghijklmnopqrstuvwxyz"
    upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

    for i in s:
        if i == " ":
            result.append(" ")
            continue
        
        if i.islower() is True:
            arr = lower
        else:
            arr = upper
        
        idx = arr.find(i) + n
        if idx > len(arr):
            idx = idx % len(arr)
        result.append(arr[idx % 26])

    return "".join(result)