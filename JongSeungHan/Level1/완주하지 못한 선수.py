def solution(participant, completion):
    answer = ''
    duplicate = ''
    chance = 1

    for i in range(len(participant)):
        for j in range(i+1, len(participant)):
            if participant[i] == participant[j]:
                duplicate = participant[j]
        
        if participant[i] == duplicate:
            if chance == 0:
                answer = participant[i]
            else:
                chance -= 1
        else:
            if participant[i] not in completion:
                answer = participant[i]
    
    return answer

# participant = ["leo", "kiki", "eden"]
# completion = ["eden", "kiki"]
participant = ["marina", "josipa", "nikola", "vinko", "filipa"]
completion = ["josipa", "filipa", "marina", "nikola"]
# participant = ["mislav", "stanko", "mislav", "ana"]
# completion = ["stanko", "ana", "mislav"]

print(solution(participant, completion))

