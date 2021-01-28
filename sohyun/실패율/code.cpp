//
// 실패율은 다음과 같이 정의한다.
//스테이지에 도달했으나 아직 클리어하지 못한 플레이어의 수 / 스테이지에 도달한 플레이어 수
//전체 스테이지의 개수 N, 게임을 이용하는 사용자가 현재 멈춰있는 스테이지의 번호가 담긴 배열 stages가 매개변수로 주어질 때, 실패율이 높은 스테이지부터 내림차순으로 스테이지의 번호가 담겨있는 배열을 return 하도록 solution 함수를 완성하라.
//

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<int> arr(N+1, 0); //도달
    vector<int> fail(N, 0); //실패
    vector<double> failarr(N, 0.0); //실패율


    for(int i = 0 ; i < stages.size() ; i++) {
        for(int k = 0 ; k < stages[i] ; k++)
            arr[k]++;
    }

    for(int i = 0 ; i < N ; i++) {
        fail[i] = (arr[i] - arr[i+1]);
    }

    for(int i = 0 ; i < N ; i++) {
        failarr[i] = fail[i]==0 ? 0.0 : (fail[i]/(double)arr[i]);
    }

    vector<double> failarr_s = failarr;
    sort(failarr_s.rbegin(), failarr_s.rend());
    unique(failarr_s.begin(), failarr_s.end());

    for(int i = 0 ; i < failarr_s.size() ; i++) {
        for(int k = 0 ; k < N ; k++) {
            if(failarr_s[i] == failarr[k]) answer.push_back(k+1);
        }
        if(answer.size() >= N) break;
    }


    return answer;
}