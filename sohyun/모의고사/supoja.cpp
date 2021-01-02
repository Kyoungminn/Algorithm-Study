/*
 < 모의고사 >
 수포자는 수학을 포기한 사람의 준말입니다. 수포자 삼인방은 모의고사에 수학 문제를 전부 찍으려 합니다. 수포자는 1번 문제부터 마지막 문제까지 다음과 같이 찍습니다.

1번 수포자가 찍는 방식: 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, ...
2번 수포자가 찍는 방식: 2, 1, 2, 3, 2, 4, 2, 5, 2, 1, 2, 3, 2, 4, 2, 5, ...
3번 수포자가 찍는 방식: 3, 3, 1, 1, 2, 2, 4, 4, 5, 5, 3, 3, 1, 1, 2, 2, 4, 4, 5, 5, ...

1번 문제부터 마지막 문제까지의 정답이 순서대로 들은 배열 answers가 주어졌을 때, 가장 많은 문제를 맞힌 사람이 누구인지 배열에 담아 return 하도록 solution 함수를 작성해주세요.

 */

#include <string>
#include <vector>
#include <set>
using namespace std;

int check1(int i, int answer) {
    return (i % 5 + 1 == answer);
}

int check2(int i, int answer) {
    int ans[4] = { 1, 3, 4, 5 };
    if (i % 2 == 0) {
        if (answer == 2) return 1;
    }
    else {
        if (ans[(i / 2) % 4] == answer) return 1;
    }
    return 0;
}

int check3(int i, int answer) {
    int ans[5] = { 3, 1, 2, 4, 5 };
    if (ans[(i / 2) % 5] == answer) return 1;
    else return 0;
}

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    set<int> count;
    vector<int> supoja(3);

    for (int i = 0; i < answers.size(); i++) {
        supoja[0] += check1(i, answers[i]);
        supoja[1] += check2(i, answers[i]);
        supoja[2] += check3(i, answers[i]);
    }

    count = { supoja[0], supoja[1], supoja[2] };
    int end = *(--count.end());

    for (int i = 0; i < 3; i++) {
        if (end == supoja[i])
            answer.emplace_back(i + 1);
    }

    return answer;
}