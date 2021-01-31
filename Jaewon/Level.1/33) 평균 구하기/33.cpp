#include <string>
#include <vector>
#include <numeric>

using namespace std;

double solution(vector<int> arr) {
    return  static_cast<double>(accumulate(arr.begin(), arr.end(), 0)) / arr.size();
}