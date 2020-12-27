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