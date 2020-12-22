def solution(arr1, arr2):
    answer = []
    for i, li in enumerate(arr1):
        temp = []
        for j, el in enumerate(li):
            temp.append(el+arr2[i][j])
        answer.append(temp)
    return answer