#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    string sol[7] = { "FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU" };

    int monthDay[11] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30 };

    int day = 0, date;
    for (int i = 0; i < a - 1; i++)
        day += monthDay[i];

    day += (b - 1);
    date = day % 7;

    answer = sol[date];

    return answer;
}