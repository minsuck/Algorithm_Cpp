#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
    vector <int> answer;
    int storage = 0;
	// 큰 수기 때문에 정수로 입력이 힘듬
    string input_n = "";    // 가변으로 할당이 가능한 string
    string num1 = "";
    string num2 = "";

    // 문자열로 입력받고
    getline(cin, input_n);  // string을 입력받기
    //cout << input_n << endl;

    // 공백으로 나누고
    string sepatator = " ";
    int pos = 0;

    // num1.pop_back();
    // if(num1.empty()) cout << num1.back() << endl;

    pos = input_n.find(sepatator, 0);   // string.find(s, n) >> string에서 's'문자를 'n'번째 자리부터 찾겠다는 뜻
    num1 = input_n.substr(0, pos);      // string.substr(a, b) >> string의 index 'a'~'b' 까지 잘라서 반환한다는 뜻
    num2 = input_n.substr(pos+1, input_n.size());

    // cout << num1 << endl;
    // cout << num2 << endl;

    // 한 자리씩 더해서 새로운 벡터에 저장 (반올림은 가산기 사용)
    int ro = 0; //반올림 가산기
    
    while(!num1.empty() || !num2.empty()){
        // num1, num2 뒤(1의자리)부터 계산, storage에 저장
        if(!num1.empty()){
            storage += (int)(num1.back() - '0');     // str.back() >> str의 맨 뒷자리 반환
            num1.pop_back();                // str.pop_back() >> 맨 뒷자리 없앰, 반환 x
        }
        if(!num2.empty()){
            storage += (int)(num2.back() - '0');
            num2.pop_back();
        }
        storage += ro;


        // storage가 10 이상이면 다시 가공
        if(storage >= 10){
            storage = storage % 10;
            ro = 1;
        }
        else{
            ro = 0;
        }

        //cout << storage << ", ";

        // answer에 문자열 형태로 집어넣기
        answer.push_back(storage);

        if(num1.empty() && num2.empty()){
            if(ro == 1) answer.push_back(ro);
        }

        storage = 0;
    }

    // 결과 벡터 출력
    for(int i=answer.size()-1; i>=0; i--){
        cout << answer[i];
    }

    return 0;
}