function solution(n) {
    var answer = "";
    for(let i = 0; i < n; i++){
        //i % 2 == 0 ? "수" : "박";
        if(i%2 == 0) answer += '수';
        else answer += '박';
    }
    
    return answer;
}