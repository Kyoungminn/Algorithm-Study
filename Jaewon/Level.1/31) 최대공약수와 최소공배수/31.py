def solution(n, m):
    min_ = min(n, m)
    while min_ > 0:
        if(n % min_ == 0 and m % min_ == 0) :
            common_max = min_;
            break
        min_ = min_-1
        
    return [common_max, common_max * (n / common_max)* (m / common_max)]