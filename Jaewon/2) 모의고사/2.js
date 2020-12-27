function solution(answers) {
    var answer = [];
    var sampleB = [2, 1, 2, 3, 2, 4, 2, 5];
    var sampleC = [3, 3, 1, 1, 2, 2, 4, 4, 5, 5];
  
    var abandoner = 3;
    var temp = [];
    for(let i = 0; i < 3; i++){
        temp[i] = 0;
    }
    
    for(let i=0; i<answers.length; i++){
        if( answers[i] === i%5+1 ){
            temp[0] = temp[0] + 1;
        }
        if( answers[i] === sampleB[i%sampleB.length]){
            temp[1] = temp[1] + 1;
        }
        if( answers[i] === sampleC[i%sampleC.length]){
            temp[2] = temp[2] + 1;
        }
    }
   
    var max = Math.max.apply(null, temp);
    for(let i = 0; i < abandoner; i++){
        if( max === temp[i]){
            answer.push(i+1);
        }
    }
    
    return answer;
}