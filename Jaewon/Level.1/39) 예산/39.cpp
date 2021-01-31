#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    sort(d.begin(), d.end());
    
    int i = 0;
    for(i; i<d.size(); i++)
    {
        if(budget - d[i] >= 0)
            budget -= d[i];
        else break;
    }
    
    return i;
}