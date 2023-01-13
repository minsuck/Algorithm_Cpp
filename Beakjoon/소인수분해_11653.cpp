/*
N�� ���μ����� ����� �� �ٿ� �ϳ��� ������������ ����Ѵ�. N�� 1�� ��� �ƹ��͵� ������� �ʴ´�.

1. N�� �Է¹ޱ�
2. ���μ����� ��� ���
2-1. N = 1 �̸� ��� ���� ��
2-2. 2���� N/2���� ���ư��鼭 ���صǴ��� Ȯ��
2-3. ���صǸ� ���� ���� �� ������, �ݺ�(����Լ� ���)
2-4. N�� �� ���صǼ� 1�� �Ǹ� ����
*/
#include <iostream>

using namespace std;

void factorization(int n);

int main(int argc, char* argv[]) {
	//cout << "Hello, goorm!" << endl;
    int N=0;

    cin >> N;

    factorization(N);
	
	return 0;
}
void factorization(int n){
    int tmp=0;

    if(n == 1)  return;
    
    for(int i=2; i<=n; i++){
        if(n % i == 0){
            cout << i << endl;
            tmp = (int)n/i;
            //cout << tmp << endl;
            factorization(tmp);
            break;
        }
    }
}