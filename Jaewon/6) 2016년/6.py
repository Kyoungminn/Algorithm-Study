def solution(a, b):
    answer = ''
    totalDay = 0
    day = ["FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"];
    dayMax = [31, 29, 31, 30, 31, 30,31, 31, 30, 31, 30, 31];
    for i in range(0, a-1):
        totalDay += dayMax[i]
    totalDay += b-1;
    answer = day[totalDay%7];
    return answer