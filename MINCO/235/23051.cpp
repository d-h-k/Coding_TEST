#include <iostream>

using namespace std;


int map[] = {3,5,1,9,7};
int pos=0;
int main() {

    char buf;
    for(int i=0 ; i<4 ; i++) {

        cin >> buf;
        
        if(buf == 'R') {
            pos--;    
        }
        else if( buf == 'L'){
            pos++;
        }
        else {
            //input error
        }

    }

    if(pos<0) {
        pos = pos+5;
    }
    else if(pos>4) {
        pos = pos-5;
    }
    else {
        
    }


    for(int i=pos ; i<5; i++) {
        cout << map[i] << ' ' ;
    }
    for(int i=0 ; i<pos; i++) {
        cout << map[i] << ' ' ;
    }

    return 0;
}