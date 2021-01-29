#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> solution(vector<string> strings, int n) {
    int len = strings.size();

    for(int i=0; i<len; i++)
    {
       for(int j=i+1;j<=len-1;j++)
       {
           if(strings[i][n] > strings[j][n])
           {
               string temp = strings[i];
               strings[i] = strings[j];
               strings[j] = temp;
           }

           else if(strings[i][n] == strings[j][n])
           {
               if(strings[i]>strings[j])
                   strings[j].swap(strings[i]);
           }
       }
    }

    return strings;
}