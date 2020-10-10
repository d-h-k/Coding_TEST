#include <iostream>
using namespace std;

int map[3][4] = {
    3,5,4,1,
    1,1,2,3,
    6,7,1,2
};

int slider[5];

int main() {

    for(int i=0 ; i<4 ; i++) {
        cin >> slider[i];
    }
    slider[4] = slider[0];

    for(int i=0 ; i<3 ; i++ ) {
        for(int j=0 ; j<4 ; j++) {
            bool is_find = false;
            int find_idx=0;
            for(int k=0; k<4 ; k++) {
                
                if(map[i][j] == slider[k]) {
                    is_find = true;
                    find_idx = k;
                }

                
            }
            if(is_find) {
                    cout << slider[find_idx+1] << ' ';
            }
            else {
                cout << map[i][j] << ' ';
            }
        }
        cout << endl;
    }

    return 0;
}