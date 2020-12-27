def solution(numbers):
    answer = []
    for i in range(len(numbers)):
        remaining_count = len(numbers) # 잔여 비교 횟수 카운트
        for j in range(i+1, remaining_count):
            sum = numbers[i]+numbers[j]
            count = 0
            duplicate = 0 # 중복되는 숫자의 개수
            while (count < len(answer)): # 서로 다른 인덱스의 두 수의 합이 삽입된 배열의 요소를 순회 
                if sum == answer[count]: # 중복된 숫자가 answer배열에 있으면 중복 카운트 1 증가
                    duplicate += 1 
                count = count + 1
            if duplicate == 0: # 중복된 수가 answer 배열에 없을 시 추가
                answer.append(sum)
            remaining_count -= 1 # 잔여 비교 횟수 1씩 차감
                
    answer.sort() # 배열의 오름차순 정렬
    return answer

numbers = [2,1,3,4,1]
print(solution(numbers))