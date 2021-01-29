#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    if( a == b ) return a;
    int small = a < b ? a : b;
    int big = a > b ? a : b;
    
    for(int i = small; i <= big; i++){
        answer += i;
    }
    return answer;
}