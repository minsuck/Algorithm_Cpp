/*
M이상 N이하의 소수를 모두 출력하는 프로그램을 작성하시오.
M이상 N이하의 소수가 하나 이상 있는 입력만 주어진다.
*/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void getDem(int m, int n);

int main(int argc, char* argv[]) {
    int M = 0;
    int N = 0;

    cin >> M >> N;

    getDem(M, N);
    //vector<int> numbers(N-M+1, 0);

    // for(int i=M; i<=N; i++){
    //     if(getDem(M, N) == 1){
    //         cout << i << '\n';  // \n이 endl보다 처리 속도가 훨씬 빠르다.
    //     }
    // }

	return 0;
}
// 수가 1,000,000 정도로 애매하게 클 때는 에라토스테네스의 채 알고리즘 사용
void getDem(int m, int n){
    // 1. 2~N까지의 자연수 나열
    vector<bool> num(1000000, true);
    num[0] = false;
    num[1] = false;
    // 2. 남은 수 중 가장 작은 i 찾기
    for(int i=0; i<sqrt(n)+1; i++){
        if(num[i] == true){
            int j = 2;
            // 3. 남은 수 중 i의 배수 모두 제거
            while(i*j < n){
                num[i*j] = false;
                j++;
            }
        }
    }
    for(int q=m; q<n; q++){
        if(num[q] == true){
            cout << q << "\n";
        }
    }
}