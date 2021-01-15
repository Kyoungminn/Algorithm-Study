//
// 함수 solution은 정수 n을 매개변수로 입력받습니다. n의 각 자릿수를 큰것부터 작은 순으로 정렬한 새로운 정수를 리턴해주세요. 예를들어 n이 118372면 873211을 리턴하면 됩니다.
//

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<int> ans;
    while(n > 0) {
        ans.push_back(n%10);
        n = (n/10);
    }
    sort(ans.begin(), ans.end());
    int count = 1;
    for(int i = 0; i < ans.size() ; i++, count *= 10){
        answer += (count * ans[i]);
    }
    return answer;
}