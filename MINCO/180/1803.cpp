#include <cstdio>

int map[3][3];
int dat[10]= {0,};

int main() {

    for(int i=0 ; i<3 ; i++) {
        for(int j=0 ; j<3 ; j++) {
            scanf( "%d" , &map[i][j] );
            dat[map[i][j]]++;
        }
    }

    for(int i=1 ; i<10 ; i++) {
        if(dat[i] == 0 ) {
            printf("%d ",i);
        }
    }

    return 0;
}
