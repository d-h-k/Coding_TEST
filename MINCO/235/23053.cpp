#include <iostream>
using namespace std;

int map[4][4];
int temp;

int main() {

    for(int i=0 ; i<3 ; i++) {
        temp = 0;
        for(int j=0 ; j<3 ; j++) {
            cin >> map[i][j];
            temp += map[i][j];
        }
        map[i][3] = temp;
    }
    
    for(int k=0 ; k<3; k++) {
        map[3][k] = map[0][k] + map[1][k] + map[2][k];
    }
    
    map[3][3] = map[1][1]+map[0][0]+map[2][2];


    //printf
    for(int i=0 ; i<4 ; i++) {
        for(int j=0 ; j<4 ; j++) {
            cout << map[i][j] << ' ';
        }
        cout << endl;
    }


    return 0;
}