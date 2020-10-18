#include <iostream>

using namespace std;

int map[9][9] = {
    0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,
};
//int name[] = {2,1,0,3,5,4,6};


int main() {
    int n;
    cin >> n;
    for(int i=0 ; i<n ; i++) {
        for(int j=0 ; j<n ; j++) {
            cin >> map[i][j];    
        }
    }
    /*
    for(int i=0 ; i<n ; i++) {
        for(int j=0 ; j<n ; j++) {
            cout << map[i][j];    
        }
        cout << endl;
    }*/

    int boss;
    
    cout << "boss:";
    for(int i=0 ; i<n ; i++) {
        if(map[i][0] == 1) {
            cout << i<<endl;
            break;
        }
    }

    cout << "under:";
    for(int i=0; i<n ; i++ ) {
        if(map[0][i] ==1) {
            cout << i << ' ';
        }
    }
    return 0;

}