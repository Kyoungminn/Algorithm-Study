//보너스
function multiple(array){
    switch(array){
        case 'S':
            return 1;
        case 'D':
            return 2;
        case 'T':
            return 3;
    }
}

//옵션 : 스타상
function star(array, idx){
    if(idx > 0)
        array[idx-1][0] = array[idx-1][0]*2;
    array[idx][0] = array[idx][0]*2;   
}

//옵션 : 아차상
function shop(array, idx){
    array[idx][0] = array[idx][0]*-1; 
}

function solution(dartResult) {
    // 3세트로 split
    var arr = dartResult.split(/(\d?\d\D?\D)/);
    // 공백 제거
    var arr_ = arr.filter((element) => element != "" && element != '');
    
    // 점수 | 보너스 | 옵션 으로 split
    var first = arr_[0].split(/(\d(?!\d)|\d\d|\D)/);
    var second = arr_[1].split(/(\d(?!\d)|\d\d|\D)/);
    var third = arr_[2].split(/(\d(?!\d)|\d\d|\D)/);
    
    // 공백 제거
    var first_ = first.filter((element) => element != "" && element != '');
    var second_ = second.filter((element) => element != "" && element != '');
    var third_ = third.filter((element) => element != "" && element != '');

    // 보너스계산
    first_[0] = Math.pow(first_[0], multiple(first_[1]));
    second_[0] = Math.pow(second_[0], multiple(second_[1]));
    third_[0] = Math.pow(third_[0], multiple(third_[1]));
    
    let arr2 = [first_, second_, third_];
    
    //옵션계산
    for(let i = 0; i < arr2.length; i++){
        if(arr2[i].length > 2){
            let ch = arr2[i][2];
            switch(ch){
                case "*":
                    star(arr2, i);
                    break;
                case "#":
                    shop(arr2, i);
                    break;
            }
        }
    }
    
    //총합 구하기
    var answer = 0;
    for(let i = 0; i < arr2.length; i++){
        answer += arr2[i][0];
    }

    return answer;
}