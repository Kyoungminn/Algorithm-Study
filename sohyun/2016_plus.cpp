/*
 < 2016년 - 수정 코드 >
 2016년 1월 1일은 금요일입니다. 2016년 a월 b일은 무슨 요일일까요?
 두 수 a ,b를 입력받아 2016년 a월 b일이 무슨 요일인지 리턴하는 함수, solution을 완성하세요.
 요일의 이름은 일요일부터 토요일까지 각각 SUN,MON,TUE,WED,THU,FRI,SAT입니다.
*/

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