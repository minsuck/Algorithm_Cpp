#include <iostream>
#include <string>
#include <vector>

using namespace std;

int func_a(int month, int day){
    int month_list[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total = 0;
    for(int i = 0; i < month-1; i++)
        total += month_list[month];
    total += day;
    return total - 1;
}

int solution(int start_month, int start_day, int end_month, int end_day) {
    int start_total = func_a(start_month, start_day);
    int end_total = func_a(end_month, end_day);
    return end_total - start_total;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    int start_month = 1;
    int start_day = 2;
    int end_month = 2;
    int end_day = 2;
    int ret = solution(start_month, start_day, end_month, end_day);
    
    // Press Run button to receive output.
    cout << "solution 함수의 반환 값은 " << ret << " 입니다." << endl;
}