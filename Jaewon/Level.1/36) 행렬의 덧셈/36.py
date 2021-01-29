def solution(arr1, arr2):
    answer = []
    for i in range(len(arr1)):
        temp = [[]]
        for j in range(len(arr1[0])):        
            temp[0].append(arr1[i][j] + arr2[i][j])
        answer = answer + temp
    return answer