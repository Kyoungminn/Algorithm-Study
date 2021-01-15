#include <string>
#include <vector>
using namespace std;

string solution(vector<string> seoul) {
    int i = 0;
    for(string temp : seoul){
        if(temp == "Kim")
            break;
        i++;
    }
    string answer1 = "김서방은 ";
    string answer2 = "에 있다";
    string answer = answer1 + to_string(i) + answer2;
    return answer;
}