#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    const string day[] = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    const int dayMax[] = {31, 29, 31, 30, 31, 30,31, 31, 30, 31, 30, 31};
    int totalDay = 0;
    for(int i = 0; i < a-1; i++){
        totalDay += dayMax[i];
    }
    totalDay += b-1;
    answer = day[totalDay%7];
    return answer;
}