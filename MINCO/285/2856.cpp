#include <iostream>
#include <cstring>
using namespace std;

int main() {

    char buf[600];
    int dat[355] = {0};


    fgets(buf,600,stdin);
    int slen = strlen(buf);

    for(int i=0 ; i<slen ; i++) {
        dat[(int)buf[i]]++;
    }

    for(int i=(int)'A' ; i<=(int)'Z' ; i++) {
        if(dat[i] > 1 ) {
            cout << (char)((char)i) ;
        }
    }
    

    return 0;
}