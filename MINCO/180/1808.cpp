#include <cstdio>

int apt[5][3] = {
    15,18,17,
    4,6,9,
    10,1,3,
    7,8,9,
    15,2,6
};

int fam[3];

int main() {

    for(int i=0 ; i<3 ; i++) {
        scanf("%d",&fam[i]);
    }

    for(int i=4 ; i>=0; i-- ) {
        for(int k=0 ; k<3 ; k++) {
            if(apt[i][k] != fam[k]) {
                break;
            } 
            printf("%d층",6-(i+1) );
            return 0;
        }
        
    }

    return 0;
}