function solution(x, n) {
    var answer = [];
    let i = x;
    for(let j = 0; j < n; j++){
        answer.push(i);
        i += x;
    }
       
    return answer;
}