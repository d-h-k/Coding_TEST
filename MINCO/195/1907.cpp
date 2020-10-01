#include <cstdio>
#include <cstring>

int main() {
    //printf("Hello world!");

    int bitray[2][2];
    int map[3][3] = {
        3,5,1,
        3,8,1,
        1,1,5
    };
    int maxi=0, maxi_idx, maxi_idy,tmp;
    int *pi;
    for(int i=0 ; i<4 ; i++) {
        scanf(" %d",&bitray[i/2][i%2]);
        //printf("%d",bitray[i/2][i%2]);
    }

    for(int i=0 ; i<2 ; i++) {
        for(int j=0 ; j<2 ; j++) {
            tmp = map[i][j]*bitray[0][0] + map[i][j+1]*bitray[0][1]
            + map[i+1][j]*bitray[1][0] + map[i+1][j+1]*bitray[1][1];

            if(tmp > maxi ) {
                maxi = tmp;
                maxi_idx = j;
                maxi_idy = i;
            }
        }
    }


    printf("(%d,%d)",maxi_idy,maxi_idx);
    return 0;
}