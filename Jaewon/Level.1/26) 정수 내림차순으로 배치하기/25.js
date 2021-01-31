function solution(n) {
    var str = n+"";
    var arr = [];
    for(let i = 0; i < str.length; i++)
        arr.push(Number(str[i]));
    arr.sort((a,b)=>b-a);
    return Number(arr.join(''));
}