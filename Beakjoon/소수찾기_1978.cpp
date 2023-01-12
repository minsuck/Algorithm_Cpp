/*
ù �ٿ� ���� ���� N�� �־�����. N�� 100�����̴�. �������� N���� ���� �־����µ� ���� 1,000 ������ �ڿ����̴�.

- N�� �Է¹ޱ�
- N���� ���� �Է¹ޱ�
> �Ҽ� ���ϴ� �˰���
 - �Ҽ� == 1�� �ڽ��� �����ϰ� ���� �� ����
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

    // N�Է¹ޱ�
    cin >> N;
    //cout << N << endl;
	cin.ignore();   // cin ���� getline()�� ����� ���� �� .ingnore()�� ����Ѵ�(cin�� �Է� ���ۿ� /n�� ���ܳ��� ����)��

    // N���� ���� �Է�
    for(int i=0; i<N; i++){
       cin >> numbers[i];
    }

    for(int q = 0; q<100; q++){
        if(numbers[q] != 0){
            result += getDem(numbers[q]);
        }
    }

    // //test �ڵ�
    // for (int w=1; w<=1000; w++){
    //     result += getDem(w);
    // }

    cout << result << endl;
    
	
	return 0;
}


int getDem(int num){
    int isDemical = 1;
    // 1�� �ƴ�
    if(num == 1)    return isDemical = 0;

    if(num == 2)    return isDemical = 1;

    // 1�� �ڱ� �ڽ��� �����ϸ� ������ �������� ����
    // ��, �������� 0�� �ƴ�
    for(int i=2; i <= (int)(num/2) + 1; i++){
        if(num % i == 0)    return isDemical = 0;
    }
    //cout  << num << ", ";
    return isDemical;
}