#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int price, string grade) {
    int answer = 0;
	int discount_rate = 0;
	/*
	- �ᱹ price * grade
	- grade�� ���η��� �����ؾ���
	*/
	
	//grade
	if(grade == "V"){
		discount_rate = 15;
	}
	else if(grade == "G"){
		discount_rate = 10;
	}
	else if(grade == "S"){
		discount_rate = 5;
	}
	
	// calculate discounted price
	answer = price * (100-discount_rate) / 100;
	
    return answer;
}

int main() {
    int price1 = 2500;
    string grade1 = "V";
    int ret1 = solution(price1, grade1);
    
    cout << "solution �Լ��� ��ȯ ���� " << ret1 << " �Դϴ�." << endl;
    
    int price2 = 96900;
    string grade2 = "S";
    int ret2 = solution(price2, grade2);

    cout << "solution �Լ��� ��ȯ ���� " << ret2 << " �Դϴ�." << endl;
}