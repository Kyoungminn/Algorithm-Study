//
// 정수 num이 짝수일 경우 Even을 반환하고 홀수인 경우 Odd를 반환하는 함수, solution을 완성해주세요.
//

#include <string>
#include <vector>

using namespace std;

string solution(int num) {
    if (num%2 == 0) return "Even";
    else return "Odd";
}