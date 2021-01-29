function handtoLF(s){
    return s === "left" ? true : false;
}

function solution(numbers, hand) {
    var left = 10;
    var right = 11;
    
    /*
    var push2 = [3, 1, 0, 1, 2, 1, 2, 3, 2, 3, 4, 4];
    var push5 = [2, 2, 1, 2, 1, 0, 1, 2, 1, 2, 3, 3];
    var push8 = [1, 3, 2, 3, 2, 1, 2, 1, 0, 1, 2, 2];
    var push0 = [0, 4, 3, 4, 3, 2, 3, 2, 1, 2, 1, 1];
    */
    var push = [[3, 1, 0, 1, 2, 1, 2, 3, 2, 3, 4, 4],
                [2, 2, 1, 2, 1, 0, 1, 2, 1, 2, 3, 3],
                [1, 3, 2, 3, 2, 1, 2, 1, 0, 1, 2, 2],
                [0, 4, 3, 4, 3, 2, 3, 2, 1, 2, 1, 1]];
    var answer = "";
    
    for(let i = 0; i < numbers.length; i++){
        if(numbers[i] === 1 || numbers[i] === 4 || numbers[i] === 7){
            left = numbers[i];
            answer += "L";
        } else if(numbers[i] === 3 || numbers[i] === 6 || numbers[i] === 9) {
            right = numbers[i];
            answer += "R";
        } else {
            let j = 0;
            switch(numbers[i]){
                case 2:
                    j = 0; break;
                case 5:
                    j = 1; break;
                case 8:
                    j = 2; break;
                case 0:
                    j = 3; break;
            }
            
            console.log("j = ", j, ", left = ", left, ", right = ", right, "push[j][left] = ", push[j][left], "push[j][right] = ", push[j][right]);
            
            if(push[j][left] < push[j][right]){
                left = numbers[i];
                answer += "L";
            } else if(push[j][left] > push[j][right]){
                right = numbers[i];
                answer += "R";
                
            } else{
                if(handtoLF(hand)){
                    left = numbers[i];
                    answer += "L";
                } else {
                     right = numbers[i];
                    answer += "R";
                }
            }
        }
    }
    return answer;
}