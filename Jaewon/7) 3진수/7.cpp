#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    string result = "";
    
    while (n > 0){
        int tempInt = (n % 3);
        char tempChar = static_cast<char>(tempInt);
        result += tempChar;
        n /= 3;
    }

    int count = 1;
    
    for(int i = result.size()-1; i >= 0; i--){
        answer += result[i] * count;
        count *= 3;
    } 
    
    return answer;
}