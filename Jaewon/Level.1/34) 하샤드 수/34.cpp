#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int n = 0;
    int temp = x;
    while(temp > 0){
        n += temp%10;
        temp = temp/10;
    }
    return  x % n == 0 ? true : false;
}