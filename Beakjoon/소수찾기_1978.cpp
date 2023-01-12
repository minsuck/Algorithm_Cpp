/*
첫 줄에 수의 개수 N이 주어진다. N은 100이하이다. 다음으로 N개의 수가 주어지는데 수는 1,000 이하의 자연수이다.

- N을 입력받기
- N개의 정수 입력받기
> 소수 구하는 알고리즘
 - 소수 == 1과 자신을 제외하고 나눌 수 없음
 - 
*/
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int getDem(int num);

int main(int argc, char* argv[]) {
	//cout << "Hello, goorm!" << endl;
    int N = 0;
    int numbers[100] = {0, };
    string input = "";
    int result = 0;

    // N입력받기
    cin >> N;
    //cout << N << endl;
	cin.ignore();   // cin 다음 getline()을 사용할 때는 꼭 .ingnore()을 사용한다(cin은 입력 버퍼에 /n을 남겨놓기 때문)ㅊ

    // N개의 정수 입력
    for(int i=0; i<N; i++){
       cin >> numbers[i];
    }

    for(int q = 0; q<100; q++){
        if(numbers[q] != 0){
            result += getDem(numbers[q]);
        }
    }

    // //test 코드
    // for (int w=1; w<=1000; w++){
    //     result += getDem(w);
    // }

    cout << result << endl;
    
	
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
    //cout  << num << ", ";
    return isDemical;
}