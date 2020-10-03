//#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int fun(int dep, int lv) {
    printf("%d",dep);
    if(lv==dep ) {
        return 0;
    }
    else {
        fun(dep+1,lv);
        fun(dep+1,lv);
    }
    return -1;
}


int main() {
    int level=0;
    scanf(" %d",&level);

    fun(0,level);

    return 0;
}