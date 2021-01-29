function solution(n)
{
    var str = String(n);
    var answer = 0;
    for(let i = 0; i < str.length; i++)
        answer += Number(str[i]);
    return answer;
}