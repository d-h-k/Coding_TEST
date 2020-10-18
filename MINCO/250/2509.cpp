#include <iostream>
#include <cstring>


using namespace std;

char map[5][5];



int main() {
    int cnt;
    for(int i=0 ; i<4 ; i++ ) {
        //fgets(&map[i][0],5,stdin);
        cin >> &map[i][0] ;
    }

    for(int i=0 ; i<4 ; i++) {
        cnt=0;
        
        for(int j=0 ; j<4 ; j++) {
            if(map[j][i] == '#') {
                cnt++;
            }
        }
        cout << 4-cnt << ' ';
    }
    
    return 0;
}