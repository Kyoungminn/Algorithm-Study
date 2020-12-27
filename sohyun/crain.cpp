#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    vector<int> basket(moves.size(), 0);

    for (int i = 0; i < moves.size(); i++) {

        int pwd, j;
        for (j = 0; j < board[0].capacity(); j++) {
            if (board[j][moves[i] - 1] != 0) {
                pwd = board[j][moves[i] - 1];
                board[j][moves[i] - 1] = 0;
                break;
            }
        }
        if (j == board[0].capacity()) continue;

        if (basket.size() != 0) {
            if (basket.back() == pwd) {
                answer += 2;
                basket.pop_back();
                continue;
            }
        }
        basket.push_back(pwd);
    }
    return answer;
}