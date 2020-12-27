#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int size = s.size();
    answer = s.substr((size - 1) / 2, (size - 1) % 2 + 1);
    return answer;
}