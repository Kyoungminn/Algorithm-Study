//
// 어떤 문장의 각 알파벳을 일정한 거리만큼 밀어서 다른 알파벳으로 바꾸는 암호화 방식을 시저 암호라고 합니다.
// 예를 들어 AB는 1만큼 밀면 BC가 되고, 3만큼 밀면 DE가 됩니다. z는 1만큼 밀면 a가 됩니다. 문자열 s와 거리 n을 입력받아 s를 n만큼 민 암호문을 만드는 함수, solution을 완성해 보세요.
//

#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    int tmp;
    for(int i = 0 ; i < s.size() ; i++) {
        tmp = s[i] + n;
        if(s[i] == ' ')
            answer.push_back(s[i]);

        else if(s[i] >= 'a' && s[i] <= 'z'){
            if(tmp > 'z') tmp -= 26;
            answer.push_back(tmp);
        }
        else {
            if(tmp > 'Z') tmp -= 26;
            answer.push_back(tmp);
        }
    }
    return answer;
}