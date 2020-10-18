#include <iostream>
#include <vector>

using namespace std;
int map[4][4] = {
    0,0,0,0,
    0,0,0,0,
    0,0,0,0,
    0,0,0,0
};

int main() {

    for(int i=0 ; i<5 ; i++) {
        for(int j=0 ; j<4 ; j++) {
            cin >> map[i][j];
        }
    }


    for(int i=4 ; i>0 ; i--) {
        
        if( map[i][0] && map[i][1] && map[i][2] && map[i][3] ) {

            for(int j=0 ; j<4; j++) {
                map[i][j] = 0;
            }
            //dangi

            for(int k=i ; k>0 ; k--) {
                map[k][0] = map[k-1][0];
                map[k][1] = map[k-1][1]; 
                map[k][2] = map[k-1][2];
                map[k][3] = map[k-1][3];
            }
            i= i+1;
        }
    }

    //cout << endl;cout << endl;
    for(int i=0 ; i<5 ; i++) {
        for(int j=0 ; j<4 ; j++) {
            cout <<  map[i][j];
            if(j != 3 ) {
                cout << ' ';
            }
        }
        cout << endl;
    }


    return 0;
}