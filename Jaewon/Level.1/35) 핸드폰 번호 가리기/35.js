function solution(phone_number) {
    var num = phone_number.split('');
    for(let i = 0; i < phone_number.length-4; i++)
        num[i] = "*"
    return  num.join('');
}