function solution(a, b) {
    var answer = '';
    var totalDay = 0;
    const day = ["FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"];
    const dayMax = [31, 29, 31, 30, 31, 30,31, 31, 30, 31, 30, 31];
    for(let i = 0; i < a-1; i++){
        totalDay += dayMax[i];
    }
    totalDay += b-1;
    answer = day[totalDay%7];
    return answer;
}