def solution(participant, completion):
    answer = ''
    participant.sort();
    completion.sort();
    
    for i, v in enumerate(participant) :
        try:
            if(participant[i] != completion[i]):
                return participant[i]
        except IndexError:
            return participant[i]