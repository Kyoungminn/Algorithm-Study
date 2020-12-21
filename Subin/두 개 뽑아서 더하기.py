def solution(numbers):
    answer = []
    l = len(numbers)
    for ind, el in enumerate(numbers):
        if ind==l-1:
            break
        for el2 in numbers[ind+1:l]:
            answer.append(el+el2)
    return sorted(list(set(answer)))