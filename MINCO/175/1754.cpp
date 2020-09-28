#include <cstdio>

int main() {

    int map[2][3] = {3,55,42,-5,-9,-10};
    int pix[2][2] = {0,};

    for(int i=0 ; i<4 ; i++) {
        scanf(" %d",&pix[i/2][i%2]);
        printf("pix[%d][%d]:%d\n",i/2,i%2,pix[i/2][i%2]);
    }

    bool is_find=false;
    for(int i=0 ; i<4 ; i++ ) {
        
        for(int j=0 ; j<6 ; j++) {
            if(pix[i] == map[j]) {
                
                printf("Y ");
                is_find = true;
                break;
            }
        }
        if(is_find == false) {
            printf("N ");
        }
        if(i==1) {puts("");}
        is_find = false;
    }


    return 0;
}