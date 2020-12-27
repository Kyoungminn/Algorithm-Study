#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    stack<int> basket;

    for (int i = 0; i < moves.size(); i++) {

        int pwd, j, check;
        check = moves[i] - 1;

        for (j = 0; j < board[0].capacity(); j++) {
            if (board[j][check] != 0) {
                pwd = board[j][check - 1];
                board[j][check - 1] = 0;
                break;
            }
        }
        if (j == board[0].capacity()) continue;

        if (basket.empty() || basket.top() != pwd)
            basket.push(pwd);
        else {
            answer += 2;
            basket.pop();
            continue;
        }
    }
    return answer;
}