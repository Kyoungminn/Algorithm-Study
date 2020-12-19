function solution(numbers) {
    var answer = [];
    for(let i = 0; i < numbers.length; i++){
        for(let j=i+1; j < numbers.length; j++){
            var num = numbers[i] + numbers[j];
             //answer = answer.filter((item, index) => answer.indexOf(item) == index);
             if(answer.indexOf(num) < 0){
                 answer.push(num);
             }
        }
    }
    answer = answer.sort((a, b) => a - b);
    return answer;
}
