//
// 1단계 new_id의 모든 대문자를 대응되는 소문자로 치환합니다.
//2단계 new_id에서 알파벳 소문자, 숫자, 빼기(-), 밑줄(_), 마침표(.)를 제외한 모든 문자를 제거합니다.
//3단계 new_id에서 마침표(.)가 2번 이상 연속된 부분을 하나의 마침표(.)로 치환합니다.
//4단계 new_id에서 마침표(.)가 처음이나 끝에 위치한다면 제거합니다.
//5단계 new_id가 빈 문자열이라면, new_id에 "a"를 대입합니다.
//6단계 new_id의 길이가 16자 이상이면, new_id의 첫 15개의 문자를 제외한 나머지 문자들을 모두 제거합니다.
//     만약 제거 후 마침표(.)가 new_id의 끝에 위치한다면 끝에 위치한 마침표(.) 문자를 제거합니다.
//7단계 new_id의 길이가 2자 이하라면, new_id의 마지막 문자를 new_id의 길이가 3이 될 때까지 반복해서 끝에 붙입니다.
//

#include <string>
#include <vector>

using namespace std;

string solution(string new_id) {
    string answer = "";
    string num = "0123456789";
    string ok = "-_.";
    char input;

    for(int i = 0 ; i < new_id.length() ; i++){
        input = tolower(new_id[i]);

        if( (input < 97 || input > 122) && num.find(input) == string::npos && ok.find(input) == string::npos )
            continue;
        else if(input=='.' && (answer.length() == 0 || i == new_id.length()-1 )) continue;
        else if(input == '.' && answer[answer.length()-1] == '.') continue;

        answer += input;

        if(answer.length() >= 15) break;
    }

    if(answer.empty()) answer += 'a';
    if(*(answer.end()-1) == '.') answer.erase(answer.end()-1);

    while(answer.length() < 3)
        answer += *(answer.end()-1);

    return answer;

}