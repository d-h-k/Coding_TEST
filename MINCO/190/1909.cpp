#include <cstdio>
#include <cstring>

using namespace std;

int img[4][4];

int rectSum(int y, int x) {
    
    int tmp = img[y][x] +img[y][x+1] +img[y][x+2] +
    img[y+1][x] +img[y+1][x+1] +img[y+1][x+2];

    return tmp;
}

int main() {

    for(int i=0 ; i<4 ; i++) {
        for(int j=0 ; j<4 ; j++) {
            scanf(" %d",&img[i][j]);
        }
    }
    
    int maxi=0, maxi_idx,maxi_idy,tmp;
    for(int i=0 ; i<3 ; i++) {
        for(int j=0 ; j<2 ; j++ ) {
            tmp = rectSum(i,j);
            if(tmp >maxi) {
                maxi = tmp;
                maxi_idx = j;
                maxi_idy = i;
            }
        }
    }

    printf("(%d,%d)",maxi_idy,maxi_idx);


    return 0;
}