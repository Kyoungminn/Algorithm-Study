//
// 길이가 n이고, 수박수박수박수....와 같은 패턴을 유지하는 문자열을 리턴하는 함수, solution을 완성하세요
//

#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    for(int i = 0 ; i < n/2 ; i++)
        answer += "수박";
    if(n%2 == 1) {
        answer += "수";
    }
    return answer;
}