function solution(participant, completion) {
    var answer = '';
    var par = participant.sort();
    var com = completion.sort(); 
    
    for(var i=0;i<par.length;i++){
        if(par[i] !== com[i]){
            answer = par[i];
            return answer;
        }
    }
}