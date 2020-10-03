//#include <iostream>
#include <cstring>
#include <cstdio>
#define DEBUG 0

using namespace std;

int rec(int dep, int order) {

    if(dep == 3) {
        printf("dep:%d // ord:%d\n",dep,order);
        return 0;
    }
    else {
        for(int i=0 ; i<3 ; i++) {
            rec(dep+1,i);
        }
    }
    return 0;
}


int main() {

    rec(0,0);


    return 0;
}


/*================================










=================================*/