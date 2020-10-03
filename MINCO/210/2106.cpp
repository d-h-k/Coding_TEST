//#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;
int cnt=0;

int vengen(int lev, int brc,int dep) {
    cnt++;
    if(dep == lev ) {
        return 0;
    }
    else {
        for(int i=0 ; i<brc ; i++) {
            vengen(lev,brc,dep+1);
        }
    }
    return -1;
}

int main() {

    int level, branch;
    scanf(" %d %d",&branch,&level);
    vengen(level,branch,0);

    printf("%d",cnt);

    return 0;
}