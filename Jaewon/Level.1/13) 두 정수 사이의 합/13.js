function solution(a, b) {
    var answer = 0;
    if(a===b) return a;
    var small = a < b ? a : b;
    var big = a > b ? a : b;

    for(let i = small; i <= big; i++){
        answer += i;
    }
    
    return answer;
}