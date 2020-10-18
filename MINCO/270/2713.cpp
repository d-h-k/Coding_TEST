#include <iostream>

using namespace std;
int map[5][5] = {
    0,1,7,2,0,
    0,0,8,0,5,
    0,0,0,3,6,
    0,0,0,0,0,
    0,0,0,0,0
};


//  A B C D E 
//A - 1 7 2 -
//B   - 8 - 5  
//C     - 3 6
//D       - -
//E         -

int main() {
    
    for(int i=0 ; i<5 ; i++) {
        for(int j=0 ; j<5 ; j++) {
            if(i<j && map[i][j]>0) {
                cout << (char)('A'+(char)i) << ' '
                <<(char)('A'+(char)j) << ' ' << map[i][j] << endl;
            }
        }
    }
    

}