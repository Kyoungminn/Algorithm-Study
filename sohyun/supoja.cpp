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