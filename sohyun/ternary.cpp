#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> ans;

    while (n > 0) {
        ans.emplace_back(n % 3);
        n /= 3;
    }

    int k = 1;
    for (int i = ans.size() - 1; i >= 0; i--) {
        answer += (k * ans[i]);
        k *= 3;
    }

    return answer;
}