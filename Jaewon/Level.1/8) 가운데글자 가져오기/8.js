function solution(s) {
    var answer = '';
    var length = s.length;
    if( length%2 == 0){
        answer += s[(length/2)-1];
    }
    answer += s[Math.floor(length/2)];
    return answer;
}