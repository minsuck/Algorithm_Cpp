#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    int left = 0;
    int right = arr.size() - 1;
    while(right - left > 0){
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left += 1;
        right -= 1;
    }
    return arr;
}

// �Ʒ��� �׽�Ʈ���̽� ����� �غ��� ���� main �Լ��Դϴ�.
int main() {
    vector<int> arr = {1, 4, 2, 3};
    vector<int> ret = solution(arr);

    cout << "solution �Լ��� ��ȯ ���� [";
    for(int i = 0; i < ret.size(); i++){
        if (i != 0) cout << ", ";
        cout << ret[i];
    }
    cout << "] �Դϴ�." << endl;
}