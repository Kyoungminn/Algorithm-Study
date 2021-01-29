function solution(s, n) {
    var answer = '';
    var lower = "abcdefghijklmnopqrstuvwxyz";
    var upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    for(let i = 0; i < s.length; i++){
        if(s[i] === ' '){
            answer += ' ';
            continue;
        }
        var textArr = lower.includes(s[i]) ? lower : upper;
        var idx = textArr.indexOf(s[i]) + n;
        if (idx >= textArr.length) idx = idx % textArr.length;
        answer += textArr[idx];
    }
    return answer;
}