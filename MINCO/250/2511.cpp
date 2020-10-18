#include <iostream>
using namespace std;

int map[3][3] = {
    0,5,4,
    3,0,0,
    0,0,1
};

void rotsig();
void pm();
void aarotn(int n);


int main() {
    int a;
    cin >> a;
    aarotn(a);
    pm();
    return 0;
}





void pm() {
    for(int i=0 ; i<3 ; i++) {
        for(int j=0 ; j<3 ; j++) {
            if(map[i][j] != 0) {
                cout << map[i][j];    
            }
            else {
                cout << '_';    
            }
            
        }
        cout << endl;
    }
    cout << endl;
}

void aarotn(int n){
    for(int i=0 ; i<n ; i++) {
        rotsig();
    }
    return;
}

void rotsig() {
    //ang90==1: 90 CW
    //ang90==2: 180 CW
    //3->270, 4->360

    int result[3][3];
    for(int i=0 ; i<3 ; i++) {
        for(int j=0 ; j<3 ; j++) {
            result[i][j] = map[2-j][i];
        }
    }
    for(int i=0 ; i<3 ; i++) {
        for(int j=0 ; j<3 ; j++) {
            map[i][j] = result[i][j];
        }
    }


}