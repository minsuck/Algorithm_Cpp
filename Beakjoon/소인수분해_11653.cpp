/*
N의 소인수분해 결과를 한 줄에 하나씩 오름차순으로 출력한다. N이 1인 경우 아무것도 출력하지 않는다.

1. N을 입력받기
2. 소인수분해 결과 출력
2-1. N = 1 이면 출력 없이 끝
2-2. 2부터 N/2까지 돌아가면서 분해되는지 확인
2-3. 분해되면 나눈 수로 또 나누기, 반복(재귀함수 사용)
2-4. N이 다 분해되서 1이 되면 종료
*/
#include <iostream>

using namespace std;

void factorization(int n);

int main(int argc, char* argv[]) {
	//cout << "Hello, goorm!" << endl;
    int N=0;

    cin >> N;

    factorization(N);
	
	return 0;
}
void factorization(int n){
    int tmp=0;

    if(n == 1)  return;
    
    for(int i=2; i<=n; i++){
        if(n % i == 0){
            cout << i << endl;
            tmp = (int)n/i;
            //cout << tmp << endl;
            factorization(tmp);
            break;
        }
    }
}