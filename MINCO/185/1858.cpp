
#include <cstdio>
#include <cstring>

using namespace std;
char buf[3][333];
int dat[256] = {0,};

int main() {

    for(int i=0 ; i<3 ; i++) {
        fgets(&buf[i][0],332,stdin);
    }

    for(int i=0 ; i<3 ; i++ ) {
        
        int slen = strlen(&buf[i][0]);
        for(int j=0 ; j<slen ; j++) {
            dat[(int)buf[i][j]]++;
        }
    }

    for(int i=(int)'A' ; i<=(int)'Z' ; i++) {
        if(dat[i] > 1) {
            puts("No");
            return 0;
        }

    }
    puts("Perfect");


    return 0;
}