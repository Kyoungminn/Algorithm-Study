/*
 < 문자열 내 마음대로 정렬하기 >
 문자열로 구성된 리스트 strings와, 정수 n이 주어졌을 때, 각 문자열의 인덱스 n번째 글자를 기준으로 오름차순 정렬하려 합니다.
 예를 들어 strings가 [sun, bed, car]이고 n이 1이면 각 단어의 인덱스 1의 문자 u, e, a로 strings를 정렬합니다.
 */

#include <string>
#include <vector>
#include <set>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;

    set<char> charN;
    for (int i = 0; i < strings.size(); i++)
        charN.insert(strings[i][n]);

    set<char>::iterator iter;
    for (iter = charN.begin(); iter != charN.end(); iter++) {

        set<string> ans;
        for (int i = 0; i < strings.size(); i++) {
            if (strings[i][n] == *iter) {
                ans.insert(strings[i]);
                strings.erase(strings.begin() + i);
                i--;
            }
        }

        for (set<string>::iterator ite = ans.begin(); ite != ans.end(); ite++)
            answer.emplace_back(*ite);

        ans.clear();
    }

    return answer;
}