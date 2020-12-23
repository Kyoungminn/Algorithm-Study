def solution(numbers):
    answer = []
    for i in range(len(numbers)):
        remaining_count = len(numbers)
        for j in range(i+1, remaining_count):
            sum = numbers[i]+numbers[j]
            count = 0
            duplicate = 0
            while (count < len(answer)):
                if sum == answer[count]:
                    duplicate += 1
                count = count + 1
            if duplicate == 0:
                answer.append(sum)
            remaining_count -= 1
                
    answer.sort()
    return answer

numbers = [2,1,3,4,1]
print(solution(numbers))