#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
    vector <int> answer;
    int storage = 0;
	// ū ���� ������ ������ �Է��� ����
    string input_n = "";    // �������� �Ҵ��� ������ string
    string num1 = "";
    string num2 = "";

    // ���ڿ��� �Է¹ް�
    getline(cin, input_n);  // string�� �Է¹ޱ�
    //cout << input_n << endl;

    // �������� ������
    string sepatator = " ";
    int pos = 0;

    // num1.pop_back();
    // if(num1.empty()) cout << num1.back() << endl;

    pos = input_n.find(sepatator, 0);   // string.find(s, n) >> string���� 's'���ڸ� 'n'��° �ڸ����� ã�ڴٴ� ��
    num1 = input_n.substr(0, pos);      // string.substr(a, b) >> string�� index 'a'~'b' ���� �߶� ��ȯ�Ѵٴ� ��
    num2 = input_n.substr(pos+1, input_n.size());

    // cout << num1 << endl;
    // cout << num2 << endl;

    // �� �ڸ��� ���ؼ� ���ο� ���Ϳ� ���� (�ݿø��� ����� ���)
    int ro = 0; //�ݿø� �����
    
    while(!num1.empty() || !num2.empty()){
        // num1, num2 ��(1���ڸ�)���� ���, storage�� ����
        if(!num1.empty()){
            storage += (int)(num1.back() - '0');     // str.back() >> str�� �� ���ڸ� ��ȯ
            num1.pop_back();                // str.pop_back() >> �� ���ڸ� ����, ��ȯ x
        }
        if(!num2.empty()){
            storage += (int)(num2.back() - '0');
            num2.pop_back();
        }
        storage += ro;


        // storage�� 10 �̻��̸� �ٽ� ����
        if(storage >= 10){
            storage = storage % 10;
            ro = 1;
        }
        else{
            ro = 0;
        }

        //cout << storage << ", ";

        // answer�� ���ڿ� ���·� ����ֱ�
        answer.push_back(storage);

        if(num1.empty() && num2.empty()){
            if(ro == 1) answer.push_back(ro);
        }

        storage = 0;
    }

    // ��� ���� ���
    for(int i=answer.size()-1; i>=0; i--){
        cout << answer[i];
    }

    return 0;
}