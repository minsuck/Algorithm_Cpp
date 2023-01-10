#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    int lastN = 10;

    /*
    1. arr을 하나씩 검사
    2. 이전 값(lastN)과 같은 값이면 넘어가기
    3. 다른 값이면 answer에 넣기
    */

    for (int i=0; i<arr.size(); i++){
        if(arr.at(i) != lastN){
            answer.push_back(arr.at(i));
        }
        lastN = arr.at(i);
    }
    //cout << "Hello Cpp" << endl;

    return answer;
}