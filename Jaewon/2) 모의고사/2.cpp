#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> sampleB = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> sampleC = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    
    int abandoner = 3;
    vector<int> temp(abandoner);
    
        for(int i=0; i<answers.size(); i++){
        if( answers[i] == i%5+1 ){
            temp[0] = temp[0] + 1;
        }
        if( answers[i] == sampleB[i%sampleB.size()]){
            temp[1] = temp[1] + 1;
        }
        if( answers[i] == sampleC[i%sampleC.size()]){
            temp[2] = temp[2] + 1;
        }
    }
    
    int max = *max_element(temp.begin(), temp.end());
    for (int i = 0; i < abandoner; i++){
         if (max == temp[i]){
             answer.push_back(i + 1);
         }
    }
        
    return answer;
}