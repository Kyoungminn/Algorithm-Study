function solution(x) {
    var num = 0;
    var str = x+"";
    for(let i = 0; i < str.length; i++)
        num += Number(str[i]);
    return x%num === 0 ? true : false;
}