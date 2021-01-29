function solution(n, m) {
    let min = Math.min(n, m);
    let common_max = 1;
    while(min > 0){
        if(n % min === 0 && m % min === 0){
            common_max = min;
            break;
        }
        min--;
    }

    return [common_max, common_max * (n / common_max)* (m / common_max)];
}