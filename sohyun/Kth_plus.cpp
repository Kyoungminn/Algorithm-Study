#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    // int start, end, nd;
    vector<int> ans;

    for (int i = 0; i < commands.size(); i++) {
        ans = array;
        sort(ans.begin() + commands[i][0] - 1, ans.begin() + commands[i][1]);
        answer.emplace_back(ans[commands[i][0] + commands[i][2] - 2]);
    }
    return answer;
}