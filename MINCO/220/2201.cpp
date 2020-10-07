#include <iostream>
using namespace std;

int path[9] = {0,};

int bbq(int lev) {
    if(lev == 2) {
        printf("%c%c\n",(char)'A'+path[2],(char)'A'+path[1]);
        return 0;
    }
    else {
        for(int i=0 ; i<3 ; i++) {
            path[lev] = i;
            bbq(lev+1);
            path[lev] = 0 ;
        }
    }
    return 0;
}

int main() {
    path[0]=1;
    bbq(0);
    path[0]=0;

    return 0;
} 