#include <string>
#include <vector>

using namespace std;

/*
1. 크기 200짜리 bool 배열 생성, false로 초기화
2. numbers 하나씩 더해서 배열에 true로 기록
3. 마지막에 true인 숫자들 answer에 push_back()
*/
vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    vector<bool> result(201);
    int saveN = 0;

    // numbers 두 개의 수를 뽑아 나오는 수 검사
    for(int i=0; i<numbers.size()-1; i++){
        for(int j=i+1; j<numbers.size(); j++){
            saveN = numbers.at(i) + numbers.at(j);
            result.at(saveN) = true;
        }
    }

    // answer에 정리
    for(int k=0; k<result.size(); k++){
        if(result.at(k) == true){
            answer.push_back(k);
        }
    }

    return answer;
}