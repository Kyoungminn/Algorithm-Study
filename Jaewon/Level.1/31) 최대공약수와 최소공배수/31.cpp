#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int n, int m) {
    int min_ = min(n, m);
    int common_max = 1;
    while(min_ > 0){
        if(n % min_ == 0 && m % min_ == 0){
            common_max = min_;
            break;
        }
        min_--;
    }
    return vector<int>{common_max, common_max * (n / common_max)* (m / common_max)};
}