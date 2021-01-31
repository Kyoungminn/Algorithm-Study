#include <string>
#include <vector>

using namespace std;

const string LOWER = "abcdefghijklmnopqrstuvwxyz";
const string UPPER = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

string solution(string s, int n) {
    string answer = "";
    
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' '){
            answer += ' ';
            continue;
        }
        string textArr = islower(s[i]) == 0 ? UPPER : LOWER;
        int idx = textArr.find(s[i]) + n;
        if (idx >= textArr.length()) idx = idx % textArr.length();
        answer += textArr[idx];
    }
    return answer;
}