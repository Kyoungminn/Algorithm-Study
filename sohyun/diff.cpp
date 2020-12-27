#include <vector>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    for (int i = 0; i < arr.size(); i++) {
        if (answer.empty() || answer[answer.size() - 1] != arr[i])
            answer.emplace_back(arr[i]);
    }

    return answer;
}