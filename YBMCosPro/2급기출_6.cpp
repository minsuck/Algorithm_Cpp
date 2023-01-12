#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int number) {
	int count = 0;
	for (int i = 1; i <= number; i++) {
		int current = i;
		while (current != 0) {
			if (((current%10)%3 == 0) && (current%10 != 0))
				count++;
			current /= 10;
		}
	}
	return count;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    int number = 40;
    int ret = solution(number);

    // Press Run button to receive output.
    cout << "solution 함수의 반환 값은 " << ret << " 입니다." << endl;
}