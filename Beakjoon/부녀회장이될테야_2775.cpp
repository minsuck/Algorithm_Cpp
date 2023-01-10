/*
평소 반상회에 참석하는 것을 좋아하는 주희는 이번 기회에 부녀회장이 되고 싶어 각 층의 사람들을 불러 모아 반상회를 주최하려고 한다.

이 아파트에 거주를 하려면 조건이 있는데, “a층의 b호에 살려면 자신의 아래(a-1)층의 1호부터 b호까지 사람들의 수의 합만큼 사람들을 데려와 살아야 한다” 는 계약 조항을 꼭 지키고 들어와야 한다.

아파트에 비어있는 집은 없고 모든 거주민들이 이 계약 조건을 지키고 왔다고 가정했을 때, 
주어지는 양의 정수 k와 n에 대해 k층에 n호에는 몇 명이 살고 있는지 출력하라.

단, 아파트에는 0층부터 있고 각층에는 1호부터 있으며, 0층의 i호에는 i명이 산다.
> 입력이 (2, 3)일 때,
2층 3호 = 1층 1호 사람 + 1층 2호 사람 + 1층 3호 사람
1층 1호 사람 = 0층 1호 사람(1) = 1
1층 2호 사람 = 0층 1호 사람(1) + 0층 2호 사람(2) = 3
1층 3호 사람 = 0층 1호 사람(1) + 0층 2호 사람(2) + 0층 3호 사람(3) = 6

그러므로 2층 3호에는 10명의 사람이 산다.

재귀함수를 이용.
*/
#include <vector>
#include <iostream>

using namespace std;
int solution(int floor, int roomnum);

int main(int argc, char* argv[]) {
	//cout << "Hello, goorm!" << endl;
    int result = 0;

    //입력 - Testcase 갯수 T
    int T = 0;
    cin >> T;

    //반복 - T만큼
    while(T>0){
        T--;
        //입력 - 정수 k, 정수 n
        int k=0;
        int n=0;
        cin >> k;
        cin >> n;

        //거주민 수 계산 함수
        result = solution(k,n);

        //출력
        cout << result << endl;
    }

	return 0;
}

int solution(int floor, int roomnum){
    int resident = 0;
    // 내 아래층 0~roomnum 호까지 사람 구해야함
    // 0층이면 호수 = 사람 수
    if(floor == 0){
        for(int i=1; i<=roomnum; i++){
            resident = i;
        }
    }
    //0층이 아니면 밑층(room-1) 사람 수 구하기
    else{
        for(int i=1; i<=roomnum; i++){
            resident += solution(floor-1, i);
        }
    }

    //cout << "solution(" << floor << ", " << roomnum << ") : resident = " << resident << endl;
    return resident;
}