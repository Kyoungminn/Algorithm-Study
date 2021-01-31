//
// 1-1. 입력된 수가 짝수라면 2로 나눕니다.
//1-2. 입력된 수가 홀수라면 3을 곱하고 1을 더합니다.
//2. 결과로 나온 수에 같은 작업을 1이 될 때까지 반복합니다.
//

#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;

    while(answer < 500 && num != 1) {

        if(num % 2 == 1) {
            num = num*3 + 1;
        }
        else num /= 2;
        answer++;
    }

    if(num == 1) return answer;
    else return -1;
}