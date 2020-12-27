/*
 < K번째 수 - 수정코드 >
 배열 array의 i번째 숫자부터 j번째 숫자까지 자르고 정렬했을 때, k번째에 있는 수를 구하려 합니다.
 */

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