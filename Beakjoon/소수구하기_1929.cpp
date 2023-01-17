/*
M�̻� N������ �Ҽ��� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
M�̻� N������ �Ҽ��� �ϳ� �̻� �ִ� �Է¸� �־�����.
*/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void getDem(int m, int n);

int main(int argc, char* argv[]) {
    int M = 0;
    int N = 0;

    cin >> M >> N;

    getDem(M, N);
    //vector<int> numbers(N-M+1, 0);

    // for(int i=M; i<=N; i++){
    //     if(getDem(M, N) == 1){
    //         cout << i << '\n';  // \n�� endl���� ó�� �ӵ��� �ξ� ������.
    //     }
    // }

	return 0;
}
// ���� 1,000,000 ������ �ָ��ϰ� Ŭ ���� �����佺�׳׽��� ä �˰��� ���
void getDem(int m, int n){
    // 1. 2~N������ �ڿ��� ����
    vector<bool> num(1000000, true);
    num[0] = false;
    num[1] = false;
    // 2. ���� �� �� ���� ���� i ã��
    for(int i=0; i<sqrt(n)+1; i++){
        if(num[i] == true){
            int j = 2;
            // 3. ���� �� �� i�� ��� ��� ����
            while(i*j < n){
                num[i*j] = false;
                j++;
            }
        }
    }
    for(int q=m; q<n; q++){
        if(num[q] == true){
            cout << q << "\n";
        }
    }
}