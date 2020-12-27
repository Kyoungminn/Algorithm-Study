#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int index;

bool compare(string a, string b) {
    return a[index] == b[index] ? a < b : a[index] < b[index];
}

vector<string> solution(vector<string> strings, int n) {
    index = n;
    sort(strings.begin(), strings.end(), compare);
    return strings;
}