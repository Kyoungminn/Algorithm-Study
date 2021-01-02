/*
 < 모의고사 - 수정코드 >
 수포자는 수학을 포기한 사람의 준말입니다. 수포자 삼인방은 모의고사에 수학 문제를 전부 찍으려 합니다. 수포자는 1번 문제부터 마지막 문제까지 다음과 같이 찍습니다.

1번 수포자가 찍는 방식: 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, ...
2번 수포자가 찍는 방식: 2, 1, 2, 3, 2, 4, 2, 5, 2, 1, 2, 3, 2, 4, 2, 5, ...
3번 수포자가 찍는 방식: 3, 3, 1, 1, 2, 2, 4, 4, 5, 5, 3, 3, 1, 1, 2, 2, 4, 4, 5, 5, ...

1번 문제부터 마지막 문제까지의 정답이 순서대로 들은 배열 answers가 주어졌을 때, 가장 많은 문제를 맞힌 사람이 누구인지 배열에 담아 return 하도록 solution 함수를 작성해주세요.

 */

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> one = { 1,2,3,4,5 };
vector<int> two = { 2,1,2,3,2,4,2,5 };
vector<int> thr = { 3,3,1,1,2,2,4,4,5,5 };

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> supoja(3);
    for (int i = 0; i < answers.size(); i++) {
        if (answers[i] == one[i % one.size()]) supoja[0]++;
        if (answers[i] == two[i % two.size()]) supoja[1]++;
        if (answers[i] == thr[i % thr.size()]) supoja[2]++;
    }
    int max = *max_element(supoja.begin(), supoja.end());
    for (int i = 0; i < 3; i++) {
        if (supoja[i] == max) answer.emplace_back(i + 1);
    }
    return answer;
}