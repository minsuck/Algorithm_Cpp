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

// �Ʒ��� �׽�Ʈ���̽� ����� �غ��� ���� main �Լ��Դϴ�.
int main() {
    int number = 40;
    int ret = solution(number);

    // Press Run button to receive output.
    cout << "solution �Լ��� ��ȯ ���� " << ret << " �Դϴ�." << endl;
}