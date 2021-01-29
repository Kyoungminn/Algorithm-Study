#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
   long long answer = 0LL;

    vector<int> temp;

    while(true) {
        temp.push_back(n%10);
        if(n/10==0) break;
        else n = n/10;
    }
    
    sort(temp.begin(), temp.end(), greater<int>());
    
    int i=1;
    while(!temp.empty()) {
        int val = temp.back();
        temp.pop_back();
        answer = answer + val*i;
        i=i*10;
    }

    return answer;
}