def solution(a, b):
    answer = ''
    #2월 29일까지 있음
    days = 0
    thirtyone = [1,3,5,7,8,10,12]
    for month in range(1,a):
        if month ==2:
            days += 29
        elif month in thirtyone:
            days +=31
        else:
            days +=30
    days += b
    dayname = ['THU','FRI', 'SAT', 'SUN','MON','TUE','WED']
    answer = dayname[days%7]
    return answer