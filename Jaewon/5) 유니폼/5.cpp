#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int lostSize = lost.size();
    int reserveSize = reserve.size();

    int numLeft, numRight;

    vector<int>::iterator iterLost, iterReserve;
    for ( iterReserve = reserve.begin(); iterReserve != reserve.end();) {
        for ( iterLost = lost.begin(); iterLost != lost.end(); iterLost++) {
            if ( *iterLost == *iterReserve ) {
                lost.erase(iterLost);
                reserve.erase(iterReserve);
                break;
            }
        }
        if ( reserveSize != reserve.size() ) {
             reserveSize = reserve.size();
        } else {
            iterReserve++;
        }
    }

    for ( iterReserve = reserve.begin(); iterReserve != reserve.end(); iterReserve++) {
        numLeft = *iterReserve - 1;
        numRight = *iterReserve + 1;
        for ( iterLost = lost.begin(); iterLost != lost.end(); ) {
            if ( *iterLost == numLeft || *iterLost == numRight ) {
                lost.erase(iterLost);
                break;
            }
            else {
                iterLost++;
            }
        }

    } 
    
    return n - lost.size();
}