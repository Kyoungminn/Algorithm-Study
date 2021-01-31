#include <string>
#include <vector>
#include <cmath>

using namespace std;

string solution(string s) {
    string answer = "";
    int length = s.length();
    if(length%2 == 0){
        answer += s[(length/2)-1];
    }
    answer += s[trunc(length/2)];
    return answer;
}