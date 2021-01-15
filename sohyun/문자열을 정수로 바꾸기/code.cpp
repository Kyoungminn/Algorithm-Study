//
// Created by Sohyun on 2021-01-16.
//

#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int num;
    int count = 1;
    for(int i = s.length()-1 ; i > 0 ; i--) {
        num = s[i] - 48;
        answer += (count*num);
        count *= 10;
    }
    if(s[0] == '-') answer *= -1;
    else if(s[0] == '+') return answer;
    else answer += count*(s[0]-48);
    return answer;
}