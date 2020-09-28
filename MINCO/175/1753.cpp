#include <cstdio>

int lvtbl[4][2] = {
    10,20,
    30,60,
    100,150,
    200,300
};

int main() {
    int input[6];
    int lvcnt[4]={0,};
    for(int i=0 ; i<6 ; i++) {
        scanf(" %d",&input[i]);
        for(int j=0 ; j<4 ; j++ ) {
            if(input[i] <= lvtbl[j][1]) {
               if(lvtbl[j][0] <= input[i]) {
                    lvcnt[j]++;
                }
            }
        }
        
    }

    for(int i=0 ; i<4 ; i++) {
        printf("lev%d:%d\n",i,lvcnt[i]);
    }

    return 0;
}