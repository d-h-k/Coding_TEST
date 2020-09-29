#include <cstdio>

int main() {

    int passengers[] = {3,7,6,4,2,9,1,7};
    int team[3];


    for(int i= 0 ; i<3 ; i++ ) {
        scanf("%d",&team[i]);
    }

    for(int i=0 ; i<8 ; i++ ) {
        if(team[0] == passengers[i]) {
            printf("%d번~%d번 칸",i,i+2);
            return 0;
        }
    }
    
    return 0;
}