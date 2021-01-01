#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    int temp=arr[0];
    answer.push_back(temp);
    for(int i = 1; i < arr.size(); i++){
        if(arr[i] != temp){
            answer.push_back(arr[i]);
        }
        temp = arr[i];
    }
    return answer;
}