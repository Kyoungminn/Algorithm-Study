function solution(n) {
    var answer = 0;
    for(let i = n; i > 1; i--){
        if(i%2 === 0) continue;
        if(isPrime(i)) answer++;
    }
    return answer+1;
}

function isPrime(n){
    for(let i = 2; i*i <= n; i++){
        if(n%i == 0) return false;
    }
    return true;
}