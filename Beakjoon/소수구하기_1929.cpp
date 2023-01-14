/*
M이상 N이하의 소수를 모두 출력하는 프로그램을 작성하시오.
M이상 N이하의 소수가 하나 이상 있는 입력만 주어진다.
*/

#include <iostream>
#include <vector>

using namespace std;

int getDem(int num);

int main(int argc, char* argv[]) {
    int M = 0;
    int N = 0;

    cin >> M >> N;

    
    vector<int> numbers(N-M+1, 0);

    for(int i=M; i<=N; i++){
        if(getDem(i) == 1){
            cout << i << '\n';  // \n이 endl보다 처리 속도가 훨씬 빠르다.
        }
    }

	return 0;
}
// 수가 1,000,000 정도로 애매하게 클 때는 에라토스테네스의 채 알고리즘 사용
int getDem(int num){

}