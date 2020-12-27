/*
 < 같은 숫자는 싫어 - 수정 코드 >
 배열 arr가 주어집니다. 배열 arr의 각 원소는 숫자 0부터 9까지로 이루어져 있습니다.
 이때, 배열 arr에서 연속적으로 나타나는 숫자는 하나만 남기고 전부 제거하려고 합니다.
 단, 제거된 후 남은 수들을 반환할 때는 배열 arr의 원소들의 순서를 유지해야 합니다
 */

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr)
{
	vector<int> answer;
	arr.erase(unique(arr.begin(), arr.end()), arr.end());

	answer = arr;
	return answer;
}