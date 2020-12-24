def solution(participant, completion):
    answer = ''

    for p in participant:
        if p in completion:
            completion.remove(p)
        else:
            answer = p
    
    return answer

# participant = ["leo", "kiki", "eden"]
# completion = ["eden", "kiki"]
participant = ["marina", "josipa", "nikola", "vinko", "filipa"]
completion = ["josipa", "filipa", "marina", "nikola"]
# participant = ["mislav", "stanko", "mislav", "ana"]
# completion = ["stanko", "ana", "mislav"]

print(solution(participant, completion))

