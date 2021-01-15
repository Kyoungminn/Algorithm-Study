//
// 문자열 s는 한 개 이상의 단어로 구성되어 있습니다. 각 단어는 하나 이상의 공백문자로 구분되어 있습니다.
// 각 단어의 짝수번째 알파벳은 대문자로, 홀수번째 알파벳은 소문자로 바꾼 문자열을 리턴하는 함수, solution을 완성하세요.
//

#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int index = 0;
    for(int i = 0 ; i < s.size() ; i++) {
        if(s[i] == ' ') {
            index = 0;
            continue;
        }
        else if(index%2 == 0) {
            if(s[i] >= 'a' && s[i] <='z')
                s[i] -= 32;
        }
        else
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
        index++;
    }
    return s;
}