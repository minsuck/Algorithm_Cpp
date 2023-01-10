/*
Mirko works in a sugar factory as a delivery boy. 
Mirko는 설탕공장 배달원으로 일합니다.
He has just received an order: he has to deliver exactly N kilograms of sugar to a candy store on the Adriatic coast. 
그는 방금 주문을 받았습니다 : '정확히' N kg 의 설탕을 Adriatic 해안가의 사탕가게로 배달을 가야 합니다.
Mirko can use two types of packages, the ones that contain 3 kilograms, and the ones with 5 kilograms of sugar.
Mirok는 2가지의 패키지를 사용합니다. 하나는 3kg, 다른 하나는 5kg입니다.

Mirko would like to take as few packages as possible. 
Mirko는 가장 작은 수의 패키지를 가지고 가고 싶습니다.
For example, if he has to deliver 18 kilograms of sugar, he could use six 3-kilogram packages. 
예를 들어, 18 kg의 설탕을 배달한다면, 그는 3 kg 패키지를 6 개 사용할 것입니다.
But, it would be better to use three 5-kilogram packages, and one 3-kilogram package, resulting in the total of four packages.
하지만, 3개의 5 kg 패키지와 1개의 3kg 패키지를 사용하는 것은 총 4개의 패키지를 사용합니다.

Help Mirko by finding the minimum number of packages required to transport exactly N kilograms of sugar.
Mirko를 도와 N kg의 설탕을 나르는 가장 작은 수의 패키지를 구해 주세요.
*/
/*
- 설탕 무게의 범위는 3~5000
- 정확히 나눌 수 없다면 -1 출력

1. 모든 경우의 수 확인하기
- 입력받은 N, 검사하는 수 suger_kg
- 3 kg 패키지의 갯수 pk3, 5 kg 패키지의 갯수 pk5
- N <= suger_kg 될 때 까지 pk5 늘리기
- N != suger_kg pk5하나 빼고 pk3넣기, N <= num_of_package일 때 까지
- 반복~
*/

#include <iostream>

using namespace std;

int packagemanager(int n);
int main(int argc, char* argv[]) {
	//cout << "Hello, goorm!" << endl;

    int N = 0;
    int num_of_package = 0;

    //입력부
    cin >> N;

    //알고리즘
    num_of_package = packagemanager(N);

    // 출력부
    cout << num_of_package << endl;

    // while(N<100){
    //     N++;
            
    //     //알고리즘
    //     num_of_package = packagemanager(N);

    //     // 출력부
    //     cout << num_of_package << endl;
    // }
	
	return 0;
}


int packagemanager(int n){
    
    int suger_kg = 0;
    int pk3 = 0;
    int pk5 = 0;

    // pk5 무작정 넣기
    pk5 = n / 5;
    //cout << "pk5 = " << pk5 << ", " << pk5*5 << endl;

    if(n == pk5*5)  return pk5;

    while(suger_kg != n){
        // 패키지가 딱 나누어 떨어지는지 검사
        suger_kg = pk3 * 3 + pk5 * 5;
        //cout << "(" << pk3 << ", " << pk5 << ") >> " << suger_kg << endl;

        if(suger_kg > n)        pk5--;
        else if(suger_kg < n)   pk3++;
        else if(suger_kg == n)  break;
        if(pk5 < 0)             return -1;
    }
    //cout << n << " >> (" << pk3 << ", " << pk5 << ") >> ";
    return pk3 + pk5;
}