function solution(s) {
    var answer = "";
    let whiteSpace = 0;
    for(let i = 0; i < s.length; i++){
        if(s.charAt(i) === ' '){
            answer += ' ';
            whiteSpace = 0;
        } else {
            answer += whiteSpace%2 != 0 ? s.charAt(i).toLowerCase() : s.charAt(i).toUpperCase();
            whiteSpace ++;
        }     
    }
    return answer;
}