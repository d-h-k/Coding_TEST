#include <iostream>

using namespace std;
bool map[4][4];

bool is_safe(int yi, int xj) {
    int dx[] = {0,0,-1,1};
    int dy[] = {-1,1,0,0};
    int nx,ny;

    for(int i=0 ; i<4 ; i++) {
        nx = dx[i] + xj;
        ny = dy[i] + yi;
        if(0<=ny && ny<=4 && 0<=nx && nx<=4 ) {
            if(map[ny][nx] == true) {
                return false;
            } 
        }
    }
    return true;
}

int main() {
    for(int i=0 ; i<4; i++) {
        for(int j=0 ; j<4; j++) {
            cin >> map[i][j] ;
        }
    }
    
    
    for(int i=0 ; i<4; i++) {
        for(int j=0 ; j<4; j++) {
            if(false == is_safe(i,j) ) {
                cout << "위험한 상태";
                return 0;
            }
        }
    }
    
    cout << "안전한 상태";
    return 0;
    
}