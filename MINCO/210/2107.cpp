//#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;


void ha(int dep,int tar){
    
    if(dep == tar) {
        printf("%d ",tar-dep+1);
        return;
    }
    else {
        printf("%d ",tar-dep+1);
        ha(dep+1,tar);
        printf("%d ",tar-dep+1);
    }
}

int main() {

    char buf[2000];
    fgets(buf,2000,stdin);

    int slen = strlen(buf);

    ha(1,slen);

    return 0;
}