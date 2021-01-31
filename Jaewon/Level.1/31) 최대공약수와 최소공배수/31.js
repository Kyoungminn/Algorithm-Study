function solution(n, m) {
    var measureN = [];
    var measureM = [];
    
    for(let i = 1; i <= n; i++)
        if(n % i === 0) measureN.push(i);
    for(let i = 1; i <= m; i++)
        if(m % i === 0) measureM.push(i);
    measureN.sort((a,b) => b-a);
    measureM.sort((a,b) => b-a);

    let max = 0;
    while(max < measureN.length){
        if(measureM.indexOf(measureN[max]) != -1){
            max = measureN[max];
            break;
        }           
        max++
    }
    return max === 1 ? [1, n*m] : [max, max*(n/max)*(m/max)];
}