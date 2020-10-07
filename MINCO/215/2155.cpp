#include <iostream>


using namespace std;

int dat[11] = {0,};
int temp;
int main() {

    for(int i=0 ; i<8 ; i++) {
        cin>> temp;
        dat[temp]++;
    }



    for(int i=0 ; i<=9 ; i++) {
        if(dat[i] != 0) {
            for(int j= 0 ; j<dat[i] ; j++) {
                cout<< i << ' ';
            }
            
        }
        
    }

    return 0;
}