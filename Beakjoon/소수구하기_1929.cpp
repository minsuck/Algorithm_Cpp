/*
M�̻� N������ �Ҽ��� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
M�̻� N������ �Ҽ��� �ϳ� �̻� �ִ� �Է¸� �־�����.
*/

#include <iostream>
#include <vector>

using namespace std;

int getDem(int num);

int main(int argc, char* argv[]) {
    int M = 0;
    int N = 0;

    cin >> M >> N;

    
    vector<int> numbers(N-M+1, 0);

    for(int i=M; i<=N; i++){
        if(getDem(i) == 1){
            cout << i << '\n';  // \n�� endl���� ó�� �ӵ��� �ξ� ������.
        }
    }

	return 0;
}
// ���� 1,000,000 ������ �ָ��ϰ� Ŭ ���� �����佺�׳׽��� ä �˰��� ���
int getDem(int num){

}