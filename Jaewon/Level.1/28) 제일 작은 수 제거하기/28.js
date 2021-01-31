function solution(arr) {
    var answer = arr.slice();
    answer.sort((a,b)=>a-b);
    arr.splice(arr.indexOf(answer[0]), 1);
    return arr.length != 0 ? arr : [-1];
}