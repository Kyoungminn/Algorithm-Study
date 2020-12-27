/*
 < 크레인 인형 뽑기 게임 - 수정코드 >
 게임 화면의 격자의 상태가 담긴 2차원 배열 board와 인형을 집기 위해 크레인을 작동시킨 위치가 담긴 배열 moves가 매개변수로 주어질 때,
 크레인을 모두 작동시킨 후 터트려져 사라진 인형의 개수를 return 하도록 solution 함수를 완성해주세요.
 */

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