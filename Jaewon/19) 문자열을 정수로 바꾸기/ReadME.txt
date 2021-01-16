//JavaScript 예시
let answer=0;
let j = 1;
for(let i = s.length-1; i > -1; i--){
    if(i === 0 && (s[0] === '+' || s[0] === '-')) break;
    answer += s[i] * j;
    j = j*10;    
}
        
return s[0] === '-' ? -answer : answer;

원래는 이와같이 코딩하는 것이 알고리즘의 취지에 맞을 것이다.
근데 귀찮으니까 그냥 형변환자 쓰겠음.

Python
def solution(s):
    return int(s)

JavaScript
function solution(s) {
    return Number(s);
}

C++
#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    return stoi(s);
}