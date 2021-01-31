function solution(seoul) {
    let i = 0;
    while(true){
        if(seoul[i] === "Kim")
            break;
        i++;
    }
    return "김서방은 " + i + "에 있다";
}