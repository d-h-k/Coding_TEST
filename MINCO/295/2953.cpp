#include <iostream>

using namespace std;


int map[3][3];

int main() {
    //cout << "hi"<<endl;

    for(int i=0 ; i<3 ; i++) {
        for(int j=0 ; j<3 ; j++) {
            cin >> map[i][j];
        }
    }
    
    for(int i=0 ; i<3 ;i++) {
        
        if(map[i][0] == map[i][1] && map[i][0] == map[i][2]  ){
            cout << map[i][0]<<endl;    
        }     
        else {
            cout <<'x'<<endl;
        }

    }
    
    return 0;
}