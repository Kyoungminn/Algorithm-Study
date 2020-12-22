def solution(n, arr1, arr2):
    answer = []
    for i in range(n):
        bin_ = bin(arr1[i]|arr2[i])[2:]
        while len(bin_) < n:
            bin_ = '0'+bin_
        answer.append(bin_.replace('0',' ').replace('1','#'))
    return answer