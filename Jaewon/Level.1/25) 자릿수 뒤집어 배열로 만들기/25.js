function solution(a, b) {
    if(a.length != b.length)
        return -1;
    var answer = 0;
    for(let i = 0; i < a.length; i++){
        answer += a[i]*b[i];
    }
    return answer;
}