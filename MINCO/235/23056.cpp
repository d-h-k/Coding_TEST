#include <iostream>
using namespace std;

char ansmap[4][4] = {
    'A','B','C','D',
    'B','B','A','B',
    'C','B','A','C',
    'B','A','A','A'
};


char inpmap[4][4] = {0};


int dat[277] = {0};

int main() {

    char buf[20];
    for(int i=0 ; i<4 ; i++) {
        cin >> buf;
        for(int j=0 ; j<4 ; j++) {
            inpmap[i][j] = buf[j];
        }
    }


    for(int i=0 ; i<4; i++) {
        for(int j=0 ; j<4 ; j++) {
            if(inpmap[i][j] == ansmap[i][j]) {
                dat[inpmap[i][j]]++;
            }
        }
    }

    int maxi=0,maxi_idx;

    for(int i='A' ; i<='Z' ; i++) {
        if(dat[i] > maxi) {
            maxi = dat[i];
            maxi_idx = i;
        }
    }
    //int ans = ((int)'A' );
    cout << (char)maxi_idx << endl;
 
    return 0;
}