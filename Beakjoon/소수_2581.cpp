/*
자연수 M과 N이 주어질 때 M이상 N이하의 자연수 중 소수인 것을 모두 골라 이들 소수의 합과 최솟값을 찾는 프로그램을 작성하시오.

M이상 N이하의 자연수 중 소수인 것을 모두 찾아 첫째 줄에 그 합을, 둘째 줄에 그 중 최솟값을 출력한다. 

단, M이상 N이하의 자연수 중 소수가 없을 경우는 첫째 줄에 -1을 출력한다.

1. 정수 M, N 입력받기
2. M이상 N이하의 소수 찾기
2-1. 소수가 없으면 -1 출력
3. 찾은 소수 합 출력
4. 찾은 소수 중 가장 작은 값 출력
*/
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int getDem(int num);

int main(int argc, char* argv[]) {
    int N = 0;
    int M = 0;
    int result_sum = 0;
    int result_smallest = 0;

    // M, N입력받기
    cin >> M;
    cin >> N;
    
    for (int w=N; w>=M; w--){
        if(getDem(w) == 1){ // w가 소수일 때
            result_sum += w;
            result_smallest = w;
        }
    }

    if(result_sum == 0){
        cout << -1 << endl;
    }
    else{
        cout << result_sum << endl;
        cout << result_smallest << endl;
    }
	
	return 0;
}


int getDem(int num){
    int isDemical = 1;

    // 1이 아님
    if(num == 1)    return isDemical = 0;

    if(num == 2)    return isDemical = 1;

    // 1과 자기 자신을 제외하면 나누어 떨어지지 않음
    // 즉, 나머지가 0이 아님
    for(int i=2; i <= (int)(num/2) + 1; i++){
        if(num % i == 0)    return isDemical = 0;
    }

    return isDemical;
}