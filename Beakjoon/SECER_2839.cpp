/*
Mirko works in a sugar factory as a delivery boy. 
Mirko�� �������� ��޿����� ���մϴ�.
He has just received an order: he has to deliver exactly N kilograms of sugar to a candy store on the Adriatic coast. 
�״� ��� �ֹ��� �޾ҽ��ϴ� : '��Ȯ��' N kg �� ������ Adriatic �ؾȰ��� �������Է� ����� ���� �մϴ�.
Mirko can use two types of packages, the ones that contain 3 kilograms, and the ones with 5 kilograms of sugar.
Mirok�� 2������ ��Ű���� ����մϴ�. �ϳ��� 3kg, �ٸ� �ϳ��� 5kg�Դϴ�.

Mirko would like to take as few packages as possible. 
Mirko�� ���� ���� ���� ��Ű���� ������ ���� �ͽ��ϴ�.
For example, if he has to deliver 18 kilograms of sugar, he could use six 3-kilogram packages. 
���� ���, 18 kg�� ������ ����Ѵٸ�, �״� 3 kg ��Ű���� 6 �� ����� ���Դϴ�.
But, it would be better to use three 5-kilogram packages, and one 3-kilogram package, resulting in the total of four packages.
������, 3���� 5 kg ��Ű���� 1���� 3kg ��Ű���� ����ϴ� ���� �� 4���� ��Ű���� ����մϴ�.

Help Mirko by finding the minimum number of packages required to transport exactly N kilograms of sugar.
Mirko�� ���� N kg�� ������ ������ ���� ���� ���� ��Ű���� ���� �ּ���.
*/
/*
- ���� ������ ������ 3~5000
- ��Ȯ�� ���� �� ���ٸ� -1 ���

1. ��� ����� �� Ȯ���ϱ�
- �Է¹��� N, �˻��ϴ� �� suger_kg
- 3 kg ��Ű���� ���� pk3, 5 kg ��Ű���� ���� pk5
- N <= suger_kg �� �� ���� pk5 �ø���
- N != suger_kg pk5�ϳ� ���� pk3�ֱ�, N <= num_of_package�� �� ����
- �ݺ�~
*/

#include <iostream>

using namespace std;

int packagemanager(int n);
int main(int argc, char* argv[]) {
	//cout << "Hello, goorm!" << endl;

    int N = 0;
    int num_of_package = 0;

    //�Էº�
    cin >> N;

    //�˰���
    num_of_package = packagemanager(N);

    // ��º�
    cout << num_of_package << endl;

    // while(N<100){
    //     N++;
            
    //     //�˰���
    //     num_of_package = packagemanager(N);

    //     // ��º�
    //     cout << num_of_package << endl;
    // }
	
	return 0;
}


int packagemanager(int n){
    
    int suger_kg = 0;
    int pk3 = 0;
    int pk5 = 0;

    // pk5 ������ �ֱ�
    pk5 = n / 5;
    //cout << "pk5 = " << pk5 << ", " << pk5*5 << endl;

    if(n == pk5*5)  return pk5;

    while(suger_kg != n){
        // ��Ű���� �� ������ ���������� �˻�
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