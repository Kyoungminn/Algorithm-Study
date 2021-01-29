function solution(d, budget) {
    d.sort((a,b) => a-b);
    let i = 0, j = 0;
    while(i < d.length){
        j += d[i];
        if(j > budget)
            break;
        i++;
    }
    return i;
}