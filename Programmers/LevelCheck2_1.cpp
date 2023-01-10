// 제한 시간 안에 풀지 못해 따로 풀었음.
#include <iostream>
#include <vector>

using namespace std;
/*
- 0,0 에서 5,5 까지 찾아가야함
- 움직이는 우선 순위는 1. 오른쪽 2. 아래쪽 3. 위쪽 4. 왼쪽
- 벽으로 막혀있거나(0일 때), maps(맵 크기)를 벗어나거나, 이미 지나온 길은 다시 가지 않음
- 목적지에 도착하거나 움직일 곳이 없으면 종료
*/
int main(int argc, char* argv[]) {
	vector<vector<int>> maps = {{1,0,1,1,1},{1,0,1,0,1},{1,0,1,1,1},{1,1,1,0,1},{0,0,0,0,1}};

    int answer = 1;
    vector<vector<bool>> road(5,vector <bool>(5,false));
    int i=0;
    int j=0;
    bool is_moved = false;
    
    // 움직임 검사
    while(i != maps.size()-1 || j != maps[0].size()-1){
        is_moved = false;
        answer++;
        //cout << i << ", " << j << endl;
        // 1. 오른쪽 이동
        if(j+1 < maps[0].size()){
            if(maps[i][j+1] != 0 && road[i][j+1] != true){
                road[i][j+1] = true;
                is_moved = true;
                j++;
				continue;
            }
        }
        // 2. 아래 이동
        if(i+1 < maps.size()){
            if(maps[i+1][j] != 0 && road[i+1][j] != true){
                road[i+1][j] = true;
                is_moved = true;
                i++;
				continue;
            }
        }
        // 3. 위 이동
        if(i-1 < maps.size()){
            if(maps[i-1][j] != 0 && road[i-1][j] != true){
                road[i-1][j] = true;
                is_moved = true;
                i--;
				continue;
            }
        }
        // 4. 왼쪽 이동
        if(j-1 < maps[0].size()){
            if(maps[i][j-1] != 0 && road[i][j-1] != true){
                road[i][j-1] = true;
                is_moved = true;
                j--;
				continue;
            }
        }
        // 못 움직일 때
        if (is_moved == false){
        	answer = -1;
			//cout << answer << endl;
            break;
        }
    }
	
	cout << answer << endl;
	return 0;
}