#include <cstdio>
#include <cstring>

struct a1908
{
    char image[3][3];
    /* data */
}typedef sketchbook;



int main() {
    
    sketchbook su1;

    int dat[257]= {0,};

    for(int i=0 ; i<3 ; i++) {
        for(int j=0 ; j<3 ; j++) {

            scanf(" %1c",&su1.image[i][j]);
            dat[(int)su1.image[i][j]]++;
        
        }
    }

    for(int i=(int)'A' ; i<=(int)'Z' ; i++ ) {
        if(dat[i] >0 ) {
            printf("%c",(char)i);
        }
    }
    
    return 0;
}