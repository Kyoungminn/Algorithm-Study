#include <string> 
#include <vector> 

using namespace std;

string solution(int a, int b) {
    string answer = "";
    string sol[7] = { "FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU" };

    int day = 0, date;

    switch (a - 1) {
    case 11:
        day += 30;
    case 10:
        day += 31;
    case 9:
        day += 30;
    case 8:
        day += 31;
    case 7:
        day += 31;
    case 6:
        day += 30;
    case 5:
        day += 31;
    case 4:
        day += 30;
    case 3:
        day += 31;
    case 2:
        day += 29;
    case 1:
        day += 31;
    }

    day += (b - 1);
    date = day % 7;

    answer = sol[date];


    return answer;
}