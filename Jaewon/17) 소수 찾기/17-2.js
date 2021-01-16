function solution(n) {
    var answer = 1;
    var arr = new Array(n+1); 
    arr.fill(1);
    
    for(let i = 2; i <= n; i++){
        if(i%2 === 0) continue;
        if(arr[i] === 1){
            for(let j = i; i*j <= n; j++)
                arr[i*j] = 0;
            answer++;
        }
    }
    return answer;
}