/*
 < 2016년 >
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