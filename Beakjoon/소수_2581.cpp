/*
�ڿ��� M�� N�� �־��� �� M�̻� N������ �ڿ��� �� �Ҽ��� ���� ��� ��� �̵� �Ҽ��� �հ� �ּڰ��� ã�� ���α׷��� �ۼ��Ͻÿ�.

M�̻� N������ �ڿ��� �� �Ҽ��� ���� ��� ã�� ù° �ٿ� �� ����, ��° �ٿ� �� �� �ּڰ��� ����Ѵ�. 

��, M�̻� N������ �ڿ��� �� �Ҽ��� ���� ���� ù° �ٿ� -1�� ����Ѵ�.

1. ���� M, N �Է¹ޱ�
2. M�̻� N������ �Ҽ� ã��
2-1. �Ҽ��� ������ -1 ���
3. ã�� �Ҽ� �� ���
4. ã�� �Ҽ� �� ���� ���� �� ���
*/
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int getDem(int num);

int main(int argc, char* argv[]) {
    int N = 0;
    int M = 0;
    int result_sum = 0;
    int result_smallest = 0;

    // M, N�Է¹ޱ�
    cin >> M;
    cin >> N;
    
    for (int w=N; w>=M; w--){
        if(getDem(w) == 1){ // w�� �Ҽ��� ��
            result_sum += w;
            result_smallest = w;
        }
    }

    if(result_sum == 0){
        cout << -1 << endl;
    }
    else{
        cout << result_sum << endl;
        cout << result_smallest << endl;
    }
	
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

    return isDemical;
}