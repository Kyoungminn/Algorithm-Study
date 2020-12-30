def solution(answers):
    n = len(answers)
    one = [1, 2, 3, 4, 5] * ceil(n / 5)
    two = [2, 1, 2, 3, 2, 4, 2, 5] * ceil(n / 8)
    three = [3, 3, 1, 1, 2, 2, 4, 4, 5, 5] * ceil(n / 10)

    # 이렇게 메모리를 많이 사용하는 것 보다 비교 리스트는 그대로 두고
    # 길이를 구한 후 나머지로 접근하는 방식이 더 효율적일 것 같다.

    count = [0, 0, 0]
    for ind, el in enumerate(answers):
        if el == one[ind]:
            count[0] += 1
        if el == two[ind]:
            count[1] += 1
        if el == three[ind]:
            count[2] += 1
    ans = []
    max_ = max(count)
    for ind, el in enumerate(count):
        if el == max_:
            ans.append(ind + 1)
    return sorted(ans)


def ceil(n):
    if n != int(n):
        return int(n) + 1
    else:
        return int(n)