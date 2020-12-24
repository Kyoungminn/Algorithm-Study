from collections import Counter

def solution(participant, completion):
    answer = ''
    result = (Counter(participant) - Counter(completion)) # Counter 모듈은 객체간 가감이 가능, dict 형식으로 중복의 개수 카운트.
    answer = list(result)[0] # list의 0번째 요소 추출

    return answer

# participant = ["leo", "kiki", "eden"]
# completion = ["eden", "kiki"]
# participant = ["marina", "josipa", "nikola", "vinko", "filipa"]
# completion = ["josipa", "filipa", "marina", "nikola"]
participant = ["mislav", "stanko", "mislav", "ana"]
completion = ["stanko", "ana", "mislav"]

print(solution(participant, completion))

