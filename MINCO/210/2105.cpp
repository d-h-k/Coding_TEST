//#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;


int main() {

    char buf[3][20];
    char temp[20];
    int len[3] = {0,};

    int maxlen=0 ,maxidx;
    for(int i=0 ; i<3;  i++) {
        fgets(&buf[i][0],20,stdin);
        len[i] = strlen(&buf[i][0]);
        buf[i][len[i]] = '\0';
        buf[i][len[i]-1] = '\0';
        if(len[i] >maxlen ) {
            maxlen = len[i];
            maxidx = i;
        }
    }


    if( maxidx != 0 ) {
        strcpy(temp,buf[0]);
        strcpy(buf[0],buf[maxidx]);
        strcpy(buf[maxidx],temp);
    }

    for(int i=0 ; i<3 ; i++ ) {
        puts(&buf[i][0]);
    }




    return 0;
}