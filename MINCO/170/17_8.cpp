#include <cstdio>
int vect[3][3] = {
    {3,7,4},
    {2,2,4},
    {2,2,5}
};

int cmap[10] = {0,};

int main() {
    int abc[3];
    scanf(" %d %d %d",&abc[0],&abc[1],&abc[2]);
    int max=0, max_idx;

    for(int i=0 ; i<3 ; i++ ) {
        for(int j=0 ; j<3 ; j++ ) {
            cmap[vect[i][j]]++;
        }
    }

    for(int i=0 ; i<3 ; i++ ) {
        if(cmap[abc[i]] > max) {
            max=cmap[abc[i]] ; 
            max_idx = i;
        }
    }


    printf("%d",abc[max_idx]);

    return 0;
}