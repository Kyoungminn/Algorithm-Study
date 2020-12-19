def solution(answers):
    answer = []
    sampleB = [2, 1, 2, 3, 2, 4, 2, 5];
    sampleC = [3, 3, 1, 1, 2, 2, 4, 4, 5, 5];
    
    abandoner = 3;
    temp = [];
    
    for i in range(abandoner):
        temp.append(0)
    
    for idx, select in enumerate(answers):
        if select == idx%5+1:
            temp[0] += 1
        if select == sampleB[idx%len(sampleB)]:
            temp[1] += 1
        if select == sampleC[idx%len(sampleC)]:
            temp[2] += 1
            
    for idx, result in enumerate(temp):
        if result == max(temp):
            answer.append(idx+1)
            
    return answer