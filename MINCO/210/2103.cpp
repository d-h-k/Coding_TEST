//#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int lbc(int lev, int brc,int dep) {
    if(dep == lev ) {
        return 0;
    }
    else {
        for(int i=0 ; i<brc ; i++) {
            lbc(lev,brc,dep+1);
        }
    }
    return 0;
}

int main() {



    int level,branch;
    scanf(" %d",&level);
    scanf(" %d",&branch);


    lbc(level,branch,0);


    return 0;
}