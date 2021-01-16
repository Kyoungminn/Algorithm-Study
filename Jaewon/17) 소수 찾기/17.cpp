#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;
    vector<bool> arr(n+1, true);

    for (int i=2; i<=n; i++) {
        if (i%2 == 0) continue;
        if (arr[i] == true) {
            for (int j=2; i*j<=n; j++) 
                arr[i*j] = false;
            answer++;
        }
    }

    return answer;
}