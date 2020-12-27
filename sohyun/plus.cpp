#include <string>
#include <vector>
#include <set>


using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    set<int> ans;

    for (int i = 0; i < numbers.size() - 1; i++) {
        for (int j = i + 1; j < numbers.size(); j++)
            ans.insert(numbers[i] + numbers[j]);
    }

    set<int>::iterator iter;

    for (iter = ans.begin(); iter != ans.end(); iter++) {
        answer.push_back(*iter);
    }

    return answer;
}