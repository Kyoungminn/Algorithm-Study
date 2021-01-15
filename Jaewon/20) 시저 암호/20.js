function solution(s, n) {
    var answer = '';
    var lower = "abcdefghijklmnopqrstuvwxyz";
    var upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    let idx = 0;
    for(let i = 0; i < s.length; i++){
        if(s[i] === ' '){
            answer += ' ';
            continue;
        }
        if(lower.indexOf(s[i]) === -1){
            idx = upper.indexOf(s[i]) + n;
            idx = idx % 26;
            answer += upper[idx];
        } else {
            idx = lower.indexOf(s[i]) + n;
            idx = idx % 26;
            answer += lower[idx];
       }
    }
    return answer;
}